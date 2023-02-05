using Google.Protobuf.Protocol;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UIElements;

public class PlatformController : ObstacleController
{
    bool goPositive = true;
    protected override void UpdateController()
    {
        Vector3 pos = new Vector3(PosInfo.X, PosInfo.Y, PosInfo.Z);
        //Vector3 moveTo = direction;
        

        if (PacketRecv)
        {
            transform.position = pos;
            goPositive = !goPositive;
            PacketRecv = false;
        }
        else
        {
            if (goPositive)
            {
                transform.position += direction * speed * Time.deltaTime;
            }
            else
            {
                transform.position -= direction * speed * Time.deltaTime;
            }
        }
        //Todo
        //Vector3 moveDir = pos - transform.position;
        //
        //float dist = moveDir.magnitude;
        //if (dist < speed * Time.deltaTime)
        //{
        //    transform.position = pos;
        //}
        //else
        //{
        //    transform.position += moveDir.normalized * speed * Time.deltaTime;
        //}
    }
}
