﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Define
{
    public enum BirdState
	{
        Idle,
        Moving,
        Jumping,

      
	}

    public enum MoveDir
	{
        None,
        Up,
        Down,
        Left,
        Right,
	}

    public enum Scene
    {
        Unknown,
        Lobby,
        Game,
    }

    public enum Sound
    {
        Bgm,
        Effect,
        MaxCount,
    }

    public enum UIEvent
    {
        Click,
        Drag,
    }
}
