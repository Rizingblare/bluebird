using Google.Protobuf.Protocol;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UIElements;

public class TrapController : ObstacleController
{
    // Start is called before the first frame update
    // Update is called once per frame
    bool goPositive = true;
    protected override void UpdateController()
    {
        Vector3 pos = new Vector3(PosInfo.X, PosInfo.Y, PosInfo.Z);

        if(PacketRecv)
        {
            transform.position = pos;
            goPositive = !goPositive;
            PacketRecv = false;
        }
        else
        {
            if (goPositive)
            {
                transform.position += new Vector3(1, 0, 0) * speed * Time.deltaTime;
            }
            else
            {
                transform.position -= new Vector3(1, 0, 0) * speed * Time.deltaTime;
            }
        }
    }
}