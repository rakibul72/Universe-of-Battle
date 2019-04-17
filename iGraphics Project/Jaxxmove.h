#ifndef JAXXMOVE_H_INCLUDED
#define JAXXMOVE_H_INCLUDED
# include "Loadimage.h"
# include "PlayerData.h"

player jaxx(px2,py2,0,0,1);	//initializing jaxx's primary data by constructor

int reikox;

void jaxxMove()
{
    if(jaxx.pos==jaxxStand){		//Standing state of jaxx
	iShowImage(jaxx.x,jaxx.y,1400,1400,jaxxstand);
	jaxx.timer=60;
	}
	else if(jaxx.pos==jaxxPunch1){		//Punching state of jaxx
	iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxpunch1);
	jaxx.timer--;
	if(jaxx.timer==1)
	{
		jaxx.pos=jaxxPunch2;
		jaxx.timer=60;
	}
	}
	else if(jaxx.pos==jaxxPunch2)		//Punching state of jaxx
	{
		iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxpunch2);
	    jaxx.timer--;
		if(jaxx.timer==1)
	{
		jaxx.pos=jaxxStand;
		jaxx.timer=60;
	}
	}
	else if(jaxx.pos==jaxxKick1)	//Kicking state of jaxx
	{
		iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxkick1);
	    jaxx.timer--;
		if(jaxx.timer==1)
	{
		jaxx.pos=jaxxKick2;
		jaxx.timer=60;
	}
	}
	else if(jaxx.pos==jaxxKick2)		//Kicking state of jaxx
	{
		iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxkick2);
	    jaxx.timer--;
		if(jaxx.timer==1)
	{
		jaxx.pos=jaxxStand;
		jaxx.timer=60;
	}
	}
	else if(jaxx.pos==jaxxMoveForward)		//Moving forward state of jaxx
	{
		iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxmoveforward);
	    jaxx.timer--;
		if(jaxx.timer==1)
	   {
		jaxx.pos=jaxxStand;
		jaxx.timer=60;
		if(jaxx.x>px2)
			jaxx.x=jaxx.x;
		else
			jaxx.x+=30;
	   }
	}
	else if(jaxx.pos==jaxxMoveBackward)		//Moving backward state of jaxx
	{
		iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxmovebackward);
	    jaxx.timer--;
		if(jaxx.timer==1)
	   {
		jaxx.pos=jaxxStand;
		jaxx.timer=60;
		if((jaxx.x-80)<=reikox)
			jaxx.x=jaxx.x;
		else
			jaxx.x-=30;
	   }
	}
	else if(jaxx.pos==jaxxJump1)		//Jumping state of jaxx
	{
		iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxjump1);
	    jaxx.timer--;
		if(jaxx.timer==1)
	{
		jaxx.pos=jaxxJump2;
		jaxx.timer=120;
		jaxx.y+=150;
	}
	}
	else if(jaxx.pos==jaxxJump2)		//Jumping state of jaxx
	{
		iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxjump2);
	    jaxx.timer--;
		if(jaxx.timer==1)
	{
		jaxx.pos=jaxxJump1Stand;
		jaxx.timer=120;
		jaxx.y-=150;
	}
	}


	else if(jaxx.pos==jaxxJump1Stand)		//Standing state of jaxx from jump
	{
		iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxjump1);
	    jaxx.timer--;
		if(jaxx.timer==1)
	   {
		jaxx.pos=reikoStand;
		jaxx.timer=120;
	   }
	}


	else if(jaxx.pos==jaxxPower){		//Power throwing state of jaxx
	iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxpower);
	jaxx.timer--;
	    jaxx.beam_x=jaxx.x-70;
		jaxx.beam_y=jaxx.y+80;
		jaxx.beam_flag=0;
	if(jaxx.timer==-100)
	{

		jaxx.pos=jaxxStand;
		jaxx.timer=60;
	}
	}
	else if(jaxx.pos==jaxxSitdown){		//Sitting down state of jaxx
	iShowImage(jaxx.x, jaxx.y, 1400, 1400,jaxxsitdown);
	jaxx.timer--;
	if(jaxx.timer==1)
	{

		jaxx.pos=jaxxStand;
		jaxx.timer=60;
	}
	}

	else if(jaxx.pos==jaxxHurt)		//Hurting state of jaxx
	{
		iShowImage(jaxx.x, jaxx.y, 1000, 920,jaxxhurt);
	hurtTimer--;
	if(hurtTimer==0)
	{

		jaxx.pos=jaxxStand;
		hurtTimer=50;;
	}
	}

	if(jaxx.beam_flag==0)
		iShowImage(jaxx.beam_x, jaxx.beam_y, 800, 400,jaxxbeam);
}

#endif // JAXXMOVE_H_INCLUDED
