#ifndef SHOWMATCHTIME_H_INCLUDED
#define SHOWMATCHTIME_H_INCLUDED

# include "Score.h";
# include "Loadimage.h";

int matchtime1=1,matchtime2=5,matchtime3=2000,introf=1,roundflag=1;
void showMatchTime()		//Function for showing time in main match & Practice Session
{
    if(matchtime1==1)
	{
		if(matchtime2==5)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=4;
				}
			}
		}

		else if(matchtime2==4)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=3;
				}
			}
		}

		else if(matchtime2==3)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=2;
				}
			}
		}

		else if(matchtime2==2)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=1;
				}
			}
		}

		else if(matchtime2==1)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=0;
				}
			}
		}

		else if(matchtime2==0)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit1);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=5;
					matchtime1=0;
				}
			}
		}
	}


	else if(matchtime1==0)
	{
		if(matchtime2==5)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit5);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=4;
				}
			}
		}

		else if(matchtime2==4)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit4);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=3;
				}
			}
		}

		else if(matchtime2==3)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit3);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=2;
				}
			}
		}

		else if(matchtime2==2)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit2);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=1;
				}
			}
		}

		else if(matchtime2==1)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit1);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{
					matchtime3=2000;
					matchtime2=0;
				}
			}
		}

		else if(matchtime2==0)
		{
			if(matchtime3>1800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit9);
				matchtime3--;
			}
			else if(matchtime3>1600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit8);
				matchtime3--;
			}
			else if(matchtime3>1400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit7);
				matchtime3--;
			}
			else if(matchtime3>1200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit6);
				matchtime3--;
			}
			else if(matchtime3>1000)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit5);
				matchtime3--;
			}
			else if(matchtime3>800)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit4);
				matchtime3--;
			}
			else if(matchtime3>600)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit3);
				matchtime3--;
			}
			else if(matchtime3>400)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit2);
				matchtime3--;
			}
			else if(matchtime3>200)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit1);
				matchtime3--;
			}
			else if(matchtime3>0)
			{
				iShowImage(495, 661, 120, 50,digit0);
				iShowImage(545, 661, 120, 50,digit0);
				iShowImage(670, 661, 120, 50,digit0);
				iShowImage(710, 661, 120, 50,digit0);
				matchtime3--;
				if(matchtime3==0)
				{

					matchtime3=2000;
					matchtime2=5;
					matchtime1=1;
					if(pageNumber==arena1){
						//introf=1;
						pageNumber=arena2;
						roundflag=1;
					}
					else if(pageNumber==arena2){
						pageNumber=arena3;
						//introf=1;
						roundflag=1;
					}

					else if(pageNumber==arena3){
						pageNumber=matchScore;
						roundflag=1;
					}

					else if(pageNumber==practiceBg){
						pageNumber=practiceScore;
					}
				}
			}
		}
	}

	}


#endif // SHOWMATCHTIME_H_INCLUDED
