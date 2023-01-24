#include "pch.h"
#include "MatchHandler.h"
#include "Games.h"
#include "Creature.h"

void MatchHandler::HandlerPacket(PacketSessionRef& ref, BYTE* buffer, int32 len)
{
    MatchHeader* head = reinterpret_cast<MatchHeader*>(buffer);
    switch (head->type)
    {
    case Match::S_MATCH:
        HandlerMatch(ref, ParsingPacket<Match::Users, MatchHeader>(buffer, (int32)head->size));
        break;
    default:
        break;
    }
}

void MatchHandler::HandlerMatch(PacketSessionRef& ref, Match::Users&& pkt)
{
    cout << "Input" << endl;
    // TODO ����üũ : �� ����� ����� ��ġ����ŷ �Ǿ��ִ��� Ȯ���� �ʿ� ����
    // Redis�� �Ǻ��ص� ������ ��
    vector<PlayerRef> players;
    for (int i = 0; i < pkt.usersize(); i++) {
        auto data = pkt.ids(i);
        players.emplace_back(make_shared<Player>(data));
        cout << data << " " << pkt.level() << endl;
    }
    Ggames->DoAsync(&Games::NewGame, &players, pkt.level(), pkt.room());
    
    //NPC ���� �׽�Ʈ�� �ڵ�

    /*auto _ref = Ggames->GetNpcRef();
    Npc::LoginData data;
    data.set_maplevel(pkt.level());
    data.set_matchroom(pkt.room());

    _ref->Send(NpcHandler::MakeSendBuffer(data, Npc::LOGIN));*/
}

SendBufferRef MatchHandler::MakeSendBuffer(Match::Data pkt, Match::STATE type)
{
    return _MakeSendBuffer<Match::Data, MatchHeader, Match::STATE>(pkt, type);
}