#ifndef REICKOMOVE_H_INCLUDED
#define REICKOMOVE_H_INCLUDED
# include "Loadimage.h"
# include "PlayerData.h"
# include "Jaxxmove.h"

player reiko(px1,py1,1500,1000,1);	//initializing reiko's primary data by constructor


void reikoMove()
{
    /*Move for Reicko*/
	if(reiko.pos==reikoStand){		//Standing state of reiko
		iShowImage(reiko.x,reiko.y,1000,920,reikostand);
		reiko.timer=60;
		reikox=reiko.x;
	}
	else if(reiko.pos==reikoPunch){		//Punching state of reiko
	iShowImage(reiko.x, reiko.y, 1000, 920,reikopunch);
	reiko.timer--;
	if(reiko.timer==1)
	{
		reiko.pos=reikoStand;
		reiko.timer=60;
	}
	}
	else if(reiko.pos==reikoKick1)		//Kicking state of reiko
	{
		iShowImage(reiko.x, reiko.y, 1000, 920,reikokick1);
	    reiko.timer--;
		if(reiko.timer==1)
	{
		reiko.pos=reikoKick2;
		reiko.timer=60;
	}
	}
	else if(reiko.pos==reikoKick2)		//Kicking state of reiko
	{
		iShowImage(reiko.x, reiko.y, 1000, 920,reikokick2);
	    reiko.timer--;
		if(reiko.timer==1)
	{
		reiko.pos=reikoKick3;
		reiko.timer=60;
	}
	}
	else if(reiko.pos==reikoKick3)		//Kicking state of reiko
	{
		iShowImage(reiko.x, reiko.y, 1000, 920,reikokick3);
	    reiko.timer--;
		if(reiko.timer==1)
	   {
		reiko.pos=reikoStand;
		reiko.timer=60;
	   }
	}
	else if(reiko.pos==reikoMoveForward)		//Moving forward state of reiko
	{
		iShowImage(reiko.x, reiko.y, 1000, 920,reikomove);
	    reiko.timer--;
		if(reiko.timer==1)
	   {
		reiko.pos=reikoStand;
		reiko.timer=60;
		if((reiko.x+80)>=jaxx.x){
			reiko.x=reiko.x;
			reikox=reiko.x;
		}
		else{
			reiko.x+=30;
			reikox=reiko.x;
		}
	   }
	}
	else if(reiko.pos==reikoMoveBack)		//Moving backward state of reiko
	{
		iShowImage(reiko.x, reiko.y, 1000, 920,reikomove);
	    reiko.timer--;
		if(reiko.timer==1)
	   {
		reiko.pos=reikoStand;
		reiko.timer=60;
		if(reiko.x<px1)
			reiko.x=reiko.x;
		else{
			reiko.x-=30;
			reikox=reiko.x;
		}
	   }
	}
	else if(reiko.pos==reikoJump1)		//Jumping state of reiko
	{
		iShowImage(reiko.x, reiko.y, 1000, 920,reikojump1);
	    reiko.timer--;
		if(reiko.timer==1)
	{
		reiko.pos=reikoJump2;
		reiko.timer=120;
		reiko.y+=150;
	}
	}
	else if(reiko.pos==reikoJump2)		//Jumping state of reiko
	{
		iShowImage(reiko.x, reiko.y, 1000, 920,reikojump2);
	    reiko.timer--;
		if(reiko.timer==1)
	{
		reiko.pos=reikoJump1Stand;
		reiko.timer=120;
		reiko.y-=150;
	}
	}


	else if(reiko.pos==reikoJump1Stand)		//Standing state of reiko from jump
	{
		iShowImage(reiko.x, reiko.y, 1000, 920,reikojump1);
	    reiko.timer--;
		if(reiko.timer==1)
	   {
		reiko.pos=reikoStand;
		reiko.timer=120;
	   }
	}


	else if(reiko.pos==reikoPower){		//Power throwing state of reiko
	iShowImage(reiko.x, reiko.y, 1000, 920,reikopower);
	reiko.timer--;
	    reiko.beam_x=reiko.x+80;
		reiko.beam_y=reiko.y+80;
		reiko.beam_flag=0;
	if(reiko.timer==-100)
	{

		reiko.pos=reikoStand;
		reiko.timer=60;
	}

	}
	else if(reiko.pos==reikoSitdown){		//Sitting down state of reiko
	iShowImage(reiko.x, reiko.y, 1000, 920,reikositdown);
	reiko.timer--;
	if(reiko.timer==1)
	{

		reiko.pos=reikoStand;
		reiko.timer=60;
	}
	}

	else if(reiko.pos==reikoHurt)		//Hurting state of reiko
	{
		iShowImage(reiko.x, reiko.y, 1000, 920,reikohurt);
	hurtTimer--;
	if(hurtTimer==0)
	{

		reiko.pos=reikoStand;
		hurtTimer=50;;
	}
	}

	if(reiko.beam_flag==0){
		iShowImage(reiko.beam_x, reiko.beam_y, 870, 489,reikobeam);

	}

}


#endif // REICKOMOVE_H_INCLUDED
