﻿using Google.Protobuf.Protocol;
using System;
using System.Collections.Generic;
using UnityEngine;


/*
 게임 오브젝트를 관리
 게임 오브젝트간의 충돌 관리??

 */
public class ObjectManager
{
    public MyPlayerController MyPlayer { get;  set; }
    static ObjectManager _instance = new ObjectManager();
    public static ObjectManager Instance { get { return _instance; } }

    //플레이어 정보 저장
    Dictionary<Int64, Player> players = new Dictionary<Int64, Player>();
    Dictionary<Int64, Obtacle> obtacles = new Dictionary<Int64, Obtacle>();

    //추가
    public void AddPlayer(Int64 id, Player player,bool myPlayer)
    {
        if (myPlayer)
        {
            GameObject go = Managers.Resource.Instantiate("Creature/MyPlayer");
            go.name = "MyPlayer" + player.Id;
            players.Add(player.Id, player);

            MyPlayer = go.GetComponent<MyPlayerController>();
            MyPlayer.id = player.Id;

        }

        else
        {
            GameObject go = Managers.Resource.Instantiate("Creature/Player");
            go.name = "Player" + player.Id;
            players.Add(player.Id, player);

            PlayerController pc = go.GetComponent<PlayerController>();
            pc.id = player.Id;
        }
        //players[id] = player;
    }
    public void RemovePlayer(Int64 id)
    {
        players.Remove(id);
    }

    //삭제
    public void AddObtacle(Int64 id, Obtacle obtacle)
    {
        obtacles[id] = obtacle;
    }
    public void RemoveObtacle(Int64 id)
    {
        obtacles.Remove(id);
    }

    // 저장된 정보 리턴
    public Player GetPlayer(Int64 id)
    {
        return players[id];
    }
    public Obtacle GetObtacle(Int64 id)
    {
        return obtacles[id];
    }
}