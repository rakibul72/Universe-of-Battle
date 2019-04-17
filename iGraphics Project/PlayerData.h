#ifndef PLAYERDATA_H_INCLUDED
#define PLAYERDATA_H_INCLUDED
#include<stdio.h>
#include<string.h>
using namespace std;

struct PlayerData		//Strucuture for Player Data
{
    int pos,timer,x,y,beam_x,beam_y,beam_flag,beam_timer;

    PlayerData()
    {
        ;
    }
	PlayerData(int x,int y,int beam_x,int beam_y,int beam_flag)
    {
        this->x=x;
		this->y=y;
		this->beam_x=beam_x;
		this->beam_y=beam_y;
		this->beam_flag=beam_flag;
    }
};

typedef struct PlayerData player;



#endif // PLAYERDATA_H_INCLUDED
