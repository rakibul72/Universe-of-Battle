# include "iGraphics.h"
# include "myheader.h"
#include<string.h>
# include "Score.h"
# include "Loadimage.h"
# include "ShowMatchTime.h"
# include "Reickomove.h"
# include "Jaxxmove.h"
# include "PlayerData.h"

//Variables used in main Program

int dragMX=0,dragMY=0,practicetimer=0;
int cursorMX,cursorMY;
int c=0,username1flag,username2flag,len1,len2;
int lifew1,lifeh1,lifew2,lifeh2;
int cx1,cy1,cx2,cy2,cx3,cy3,cx4,cy4,parasiteTimer,pf1=1,pf2=1,pf3=1,pf4=1,dx1,dx2,dy1,dy2,dx3,dy3,dx4,dy4;
int roundtimer,death=400;
char username1[100],username2[100],str1[100],str2[100];
int explosionTime=100,ex,ey,ef=0;
int ix1,iy,ix2,landtimer;
int jaxxScore=0,reikoScore=0;
int botKilled;
int backgroundMusic=1;

/* iShowImage():
	Here, first 2 parameters are the lower left
	corner position of image you want to put.
	3rd and 4th parameters are the widht and the height
	of the image.
	Last parameter is the id of the image you want to put.
*/

/*For showing buttons to move jaxx.
The images are loaded on Loadimage.h Header file.
*/

void showButtons()
{
	iShowImage(1123, 540, 400, 300, arrowUp);
	iShowImage(1123, 455, 400, 300, arrowDown);
	iShowImage(1060, 500, 400, 300, arrowLeft);
	iShowImage(1185, 500, 400, 300, arrowRight);
	iShowImage(1089, 463, 420, 300, buttonA);
	iShowImage(1152, 463, 420, 300, buttonS);
	iShowImage(1215, 463, 420, 300, buttonD);
}

//Function to determine collision between two characters

bool collide(int obj1Y, int obj1H, int obj2Y, int obj2H)
{
	bool isCollided = false;;
	if(obj1Y>=obj2Y && obj1Y<=obj2Y+obj2H) isCollided= true;
	if(obj1Y+obj1H>=obj2Y && obj1Y+obj1H<=obj2Y+obj2H) isCollided = true;
	return isCollided;
}

/*For showing life of characters*/

void showLife()
{
	iSetColor(255,255,255);
	iRectangle(122, 624, 280, 20);
	iRectangle(750, 624, 280, 20);
	iSetColor(255,0,0);
	if(lifew1>0)
		iFilledRectangle(123,625,lifew1,lifeh1);
	if(lifew2>0)
		iFilledRectangle(751,625,lifew2,lifeh2);

	if(jaxx.beam_x==reiko.x && collide(jaxx.beam_y,20,reiko.y,100) && lifew1>=0){      //decrement of life of Player-1(reiko) in case of collision
				lifew1-=15;
				jaxx.beam_flag=1;
				ex=reiko.x+20;
				ey=reiko.y+100;
				ef=1;
				reiko.pos=reikoHurt;
	}
	if(reiko.beam_x==jaxx.x && collide(reiko.beam_y,20,jaxx.y,100) && lifew2>=0){      //decrement of life of Player-2(jaxx) in case of collision
				lifew2-=15;
				reiko.beam_flag=1;
				ex=jaxx.x-20;
				ey=jaxx.y+100;
				ef=1;
				jaxx.pos=jaxxHurt;
	}
}

/*
function iDraw() is called again and again by the system.
*/

void iDraw()
{

	iClear();

	if(backgroundMusic==1)    //Condition for playing background music
		{
			PlaySound("music/BackgroundMusic.wav",NULL,SND_LOOP | SND_ASYNC);
			backgroundMusic=0;
		}
	if(backgroundMusic==2)    //Condition for playing game-time music
		{
			PlaySound("music/PlayMusic.wav",NULL,SND_LOOP | SND_ASYNC);
			backgroundMusic=0;
		}
	if(backgroundMusic==3)     //Condition for playing practice-time music
		{
			PlaySound("music/PracticeMusic.wav",NULL,SND_LOOP | SND_ASYNC);
			backgroundMusic=0;
		}
	
	//Game loading & Menu showing
	
	if(pageNumber==loading)
	{
		botKilled=0;

		if(c<=150)
		{
			iShowImage(0, 0, 1280, 720, Loading2);
			c++;
		}
		else if(c>150 && c<=300)
		{
			iShowImage(0, 0, 1280, 720, Loading3);
			c++;
		}
		else if(c>300 && c<=450)
		{
			iShowImage(0, 0, 1280, 720, Loading4);
			c++;
		}
		else if(c>450 && c<=600)
		{
			iShowImage(0, 0, 1280, 720, Loading5);
			c++;
		}
		else if(c>600 && c<=750)
		{
			iShowImage(0, 0, 1280, 720, Loading6);
			c++;
		}
		else
		{
			iShowImage(0, 0, 1280, 720, Menu);     //Game Menu
			if((cursorMX>=967&&cursorMY>=449)&&(cursorMX<=1254&&cursorMY<=516))   //For pointing the PlayGame button
			{
				iSetColor(102, 255, 102);
				iRectangle(968, 450, 286, 66);
				iRectangle(967, 449, 288, 68);
				iRectangle(966, 448, 290, 70);
				iRectangle(965, 447, 292, 72);
			}
			if((cursorMX>=967&&cursorMY>=372)&&(cursorMX<=1254&&cursorMY<=439))   //For pointing the Practice button
			{
				iSetColor(255, 196, 0);
				iRectangle(968, 373, 286, 64);
				iRectangle(967, 372, 288, 66);
				iRectangle(966, 371, 290, 68);
				iRectangle(965, 370, 292, 70);
			}
			if((cursorMX>=967&&cursorMY>=289)&&(cursorMX<=1254&&cursorMY<=356))   //For pointing the LeaderBoard button
			{
				iSetColor(255, 196, 0);
				iRectangle(968, 290, 286, 66);
				iRectangle(967, 289, 288, 68);
				iRectangle(966, 288, 290, 70);
				iRectangle(965, 287, 292, 72);
			}
			if((cursorMX>=967&&cursorMY>=207)&&(cursorMX<=1254&&cursorMY<=276))   //For pointing the About button
			{
				iSetColor(255, 196, 0);
				iRectangle(968, 208, 286, 66);
				iRectangle(967, 207, 288, 68);
				iRectangle(966, 206, 290, 70);
				iRectangle(965, 205, 292, 72);
			}
			if((cursorMX>=967&&cursorMY>=123)&&(cursorMX<=1254&&cursorMY<=190))    //For pointing the Help button
			{
				iSetColor(255, 196, 0);
				iRectangle(968, 124, 286, 66);
				iRectangle(967, 123, 288, 68);
				iRectangle(966, 122, 290, 70);
				iRectangle(965, 121, 292, 72);
			}
			if((cursorMX>=967&&cursorMY>=37)&&(cursorMX<=1254&&cursorMY<=106))    //For pointing the Quit button
			{
				iSetColor(255, 0, 0);
				iRectangle(968, 38, 286, 66);
				iRectangle(967, 37, 288, 68);
				iRectangle(966, 36, 290, 70);
				iRectangle(965, 35, 292, 72);
			}
		}
	}
	else if(pageNumber==userName1)     //Usename-1 input page when user click on PlayGame Button
	{
		    
			iShowImage(0, 0, 1280, 720, Username);
			iSetColor(150, 150, 150);
			iFilledRectangle(455, 505, 350, 30);
			iSetColor(0, 0, 0);
			iText(455, 545, "Enter First Username", GLUT_BITMAP_TIMES_ROMAN_24);
			iSetColor(255, 255, 255);
			iText(510, 510, str1,GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if(pageNumber==userName2)   //Usename-2 input page when user-1 complete inputting his/her name 
	{
			iShowImage(0, 0, 1280, 720, Username);
			iSetColor(150, 150, 150);
			iFilledRectangle(455, 505, 350, 30);
			iSetColor(0, 0, 0);
			iText(455, 545, "Enter Second Username", GLUT_BITMAP_TIMES_ROMAN_24);
			iSetColor(255, 255, 255);
			iText(510, 510, str2,GLUT_BITMAP_TIMES_ROMAN_24);
	}
	//Game Round-1
	else if(pageNumber==arena1)
	{
		jaxxScore=0;
		reikoScore=0;
		if(roundflag==1)
		{
			lifew1=278;
		    lifew2=278;
			roundtimer=0;
			reiko.x=px1;    //px1,px2,py1,py2 are defined in Loadimage.h Header File & used to initialize two characters starting place
		    reiko.y=py1;    //reiko.x,reiko.y,jaxx.x,jaxx.y are defined in the PlayerData.h Header File
		    jaxx.x=px2;
		    jaxx.y=py2;
		    death=400;
		    matchtime3=2000;
		    matchtime2=5;
		    matchtime1=1;
		    roundflag=0;
		}

	   //For showing the graphics before a round starting

       else if(roundtimer<=1200){
		iShowImage(0,0,1280,720,round1);
		roundtimer++;

		
	}

	
	else if(roundtimer>1200 && roundtimer<=1500)
	{
		iShowImage(0,0,1280,720,round13);
		roundtimer++;

	}

	else if(roundtimer>1500 && roundtimer<=1800)
	{
		iShowImage(0,0,1280,720,round12);
		roundtimer++;

	}
	else if(roundtimer>1800 && roundtimer<=2100)
	{
		iShowImage(0,0,1280,720,round11);
		roundtimer++;

	}

	else if(roundtimer>2100 && roundtimer<=2400)
	{
		iShowImage(0,0,1280,720,round1fight);
		roundtimer++;

	}

	//For Showing the characters death moment

	else if(lifew1<=0 || lifew2<=0){
		if(lifew1<=0 && lifew2>0 && death>=0)
		{
			if(death>=0 && death<=400){
				iShowImage(0,0,1280,720,Arena1);
				iShowImage(reiko.x,reiko.y,1000,920,reikodeath);
				iShowImage(jaxx.x,jaxx.y,1000,920,jaxxstand);
				death--;
			}
		}
		else if(lifew1>0 && lifew2<=0 && death>=0)
		{
			if(death>=0 && death<=400){
				iShowImage(0,0,1280,720,Arena1);
				iShowImage(jaxx.x,jaxx.y,1000,920,jaxxdeath);
				iShowImage(reiko.x,reiko.y,1000,920,reikostand);
				death--;
			}
		}

		else{
			if(lifew1<=0)
				jaxxScore+=100;
			if(lifew2<=0)
				reikoScore+=100;
			pageNumber=arena2;   //For showing Round-2 Arena
			roundflag=1;
		}
	}

	else{
	iShowImage(0, 0, 1280, 720, Arena1);
	showButtons();   //Function for Showing Buttons in match-time
	showMatchTime(); //Function for Showing match-time,defined in ShowMatchTime.h Header File
	reikoMove();     //Function for movement of Player reiko,defined in Reickomove.h Header File
	jaxxMove();     //Function for movement of Player jaxx,defined in Jaxxmove.h Header File
	showLife();     //Function for showing life of characters,defined in the same file
	if(ef=1)
		{
			if(explosionTime>=0)
			{
				iShowImage(ex,ey,500,200,explosion);
				explosionTime--;
			}
			else
			{
				ef=0;
				ex=5000;
				ey=5000;
				explosionTime=100;
			}
		}
	}
	}

	//Game Round-2

	else if(pageNumber==arena2)
	{
		if(roundflag==1)
		{
			lifew1=278;
		    lifew2=278;
			roundtimer=0;
			reiko.x=px1;      //px1,px2,py1,py2 are defined in Loadimage.h Header File & used to initialize two characters starting place
			reikox=reiko.x;   //reiko.x,reiko.y,jaxx.x,jaxx.y are defined in the PlayerData.h Header File
		    reiko.y=py1;
		    jaxx.x=px2;
		    jaxx.y=py2;
		    death=400;
		    matchtime3=2000;
		    matchtime2=5;
		    matchtime1=1;
		    roundflag=0;
		}
		
		//For showing the graphics before a round starting

    	else if(roundtimer<=1200){
		iShowImage(0,0,1280,720,round2);
		roundtimer++;
		lifew1=278;
		lifew2=278;
	}

	
	else if(roundtimer>1200 && roundtimer<=1500)
	{
		iShowImage(0,0,1280,720,round23);
		roundtimer++;

	}

	else if(roundtimer>1500 && roundtimer<=1800)
	{
		iShowImage(0,0,1280,720,round22);
		roundtimer++;

	}
	else if(roundtimer>1800 && roundtimer<=2100)
	{
		iShowImage(0,0,1280,720,round21);
		roundtimer++;

	}

	else if(roundtimer>2100 && roundtimer<=2400)
	{
		iShowImage(0,0,1280,720,round2fight);
		roundtimer++;

	}

	//For Showing the characters death moment

	else if(lifew1<=0 || lifew2<=0){

		if(lifew1<=0 && lifew2>0 && death>=0)
		{
			if(death>=0 && death<=400){
				iShowImage(0,0,1280,720,Arena2);
				iShowImage(reiko.x,reiko.y,1000,920,reikodeath);
				iShowImage(jaxx.x,jaxx.y,1000,920,jaxxstand);
				death--;
			}
		}
		else if(lifew1>0 && lifew2<=0 && death>=0)
		{
			if(death>=0 && death<=400){
				iShowImage(0,0,1280,720,Arena2);
				iShowImage(jaxx.x,jaxx.y,1000,920,jaxxdeath);
				iShowImage(reiko.x,reiko.y,1000,920,reikostand);
				death--;
			}
		}

		else{
			if(lifew1<=0)
			jaxxScore+=100;
		if(lifew2<=0)
			reikoScore+=100;
			pageNumber=arena3;   //For going to Round-3 Arena
		roundtimer=0;
		roundflag=1;
		}
	}

	else{
	iShowImage(0, 0, 1280, 720, Arena2);
	showMatchTime();     //Function for Showing match-time,defined in ShowMatchTime.h Header File
	showButtons();      //Function for Showing Buttons in match-time
	reikoMove();        //Function for movement of Player reiko,defined in Reickomove.h Header File
	jaxxMove();			//Function for movement of Player jaxx,defined in Jaxxmove.h Header File
	showLife();			//Function for showing life of characters,defined in the same file

	if(ef=1)
		{
			if(explosionTime>=0)
			{
				iShowImage(ex,ey,500,200,explosion);
				explosionTime--;
			}
			else
			{
				ef=0;
				ex=5000;
				ey=5000;
				explosionTime=100;
			}
		}
	}
	}

	//Game Round-3

	else if(pageNumber==arena3)
	{
		if(roundflag==1)
		{
			lifew1=278;
		    lifew2=278;
			roundtimer=0;
			reiko.x=px1;			//px1,px2,py1,py2 are defined in Loadimage.h Header File & used to initialize two characters starting place
			reikox=reiko.x;			//reiko.x,reiko.y,jaxx.x,jaxx.y are defined in the PlayerData.h Header File
		    reiko.y=py1;
		    jaxx.x=px2;
		    jaxx.y=py2;
		    death=400;
		    matchtime3=2000;
		    matchtime2=5;
		    matchtime1=1;
		    roundflag=0;
		}

		//For showing the graphics before a round starting

		else if(roundtimer<=1200){
		iShowImage(0,0,1280,720,round3);
		roundtimer++;
		lifew1=278;
		lifew2=278;
	   }

	
	else if(roundtimer>1200 && roundtimer<=1500)
	{
		iShowImage(0,0,1280,720,round33);
		roundtimer++;

	}

	else if(roundtimer>1500 && roundtimer<=1800)
	{
		iShowImage(0,0,1280,720,round32);
		roundtimer++;

	}
	else if(roundtimer>1800 && roundtimer<=2100)
	{
		iShowImage(0,0,1280,720,round31);
		roundtimer++;

	}

	else if(roundtimer>2100 && roundtimer<=2400)
	{
		iShowImage(0,0,1280,720,round3fight);
		roundtimer++;

	}

	//For Showing the characters death moment

	else if(lifew1<=0 || lifew2<=0){

        if(lifew1<=0 && lifew2>0 && death>=0)
		{
			if(death>=0 && death<=400){
				iShowImage(0,0,1280,720,Arena3);
				iShowImage(reiko.x,reiko.y,1000,920,reikodeath);
				iShowImage(jaxx.x,jaxx.y,1000,920,jaxxstand);
				death--;
			}
		}
		else if(lifew1>0 && lifew2<=0 && death>=0) 
		{
			if(death>=0 && death<=400){
				iShowImage(0,0,1280,720,Arena3);
				iShowImage(jaxx.x,jaxx.y,1000,920,jaxxdeath);
				iShowImage(reiko.x,reiko.y,1000,920,reikostand);
				death--;
			}
		}

		else{		//For Game Score & saving data in File
		if(lifew1<=0)
			jaxxScore+=100;
		if(lifew2<=0)
			reikoScore+=100;
		if(jaxxScore==300)
			jaxxScore+=200;
		if(reikoScore==300)
			reikoScore+=200;
		FILE* scoreboard=fopen("scoreboard.txt","a");
		fprintf(scoreboard,"%d\n",reikoScore);
		fprintf(scoreboard,"%d\n",jaxxScore);
		fclose(scoreboard);
		pageNumber=matchScore;	//For showing match score after the match finished
		roundtimer=600;
		roundflag=1;
		}
	}

	else{
	iShowImage(0, 0, 1280, 720, Arena3);
	showMatchTime();		//Function for Showing match-time,defined in ShowMatchTime.h Header File
	showButtons();			//Function for Showing Buttons in match-time
	reikoMove();			//Function for movement of Player reiko,defined in Reickomove.h Header File
	jaxxMove();				//Function for movement of Player jaxx,defined in Jaxxmove.h Header File
	showLife();				//Function for showing life of characters,defined in the same file
	if(ef=1)
		{
			if(explosionTime>=0)
			{
				iShowImage(ex,ey,500,200,explosion);
				explosionTime--;
			}
			else
			{
				ef=0;
				ex=5000;
				ey=5000;
				explosionTime=100;
			}
		}
	
	}
	}

	//For Showing MatchScore

	else if(pageNumber==matchScore)
	{
		iShowImage(0, 0, 1280, 720, MatchScore);
		char user1score[10],user2score[10];
		sprintf(user1score, "%d" , reikoScore);
		sprintf(user2score, "%d" , jaxxScore);
		iSetColor(51, 255, 51);
		iText(475, 475, "Score of ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(575, 475,username1 , GLUT_BITMAP_TIMES_ROMAN_24);
		iText(730, 475, user1score, GLUT_BITMAP_TIMES_ROMAN_24);

		iText(475, 435,"Score of " , GLUT_BITMAP_TIMES_ROMAN_24);
		iText(575, 435, username2 , GLUT_BITMAP_TIMES_ROMAN_24);
		iText(730, 435, user2score, GLUT_BITMAP_TIMES_ROMAN_24);
		
		if(reikoScore>jaxxScore){		//Condition for selecting Winner
			iText(475, 400,"Winner is  " , GLUT_BITMAP_TIMES_ROMAN_24);
			iText(575, 400, username1 , GLUT_BITMAP_TIMES_ROMAN_24);
			iText(730, 400,"Congratulations!!" , GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else if(reikoScore<jaxxScore){
			iText(475, 400,"Winner is  " , GLUT_BITMAP_TIMES_ROMAN_24);
			iText(575, 400, username2 , GLUT_BITMAP_TIMES_ROMAN_24);
			iText(730, 400,"Congratulations!!" , GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else if(reikoScore==jaxxScore)
		{
			iText(475, 400,"The match Drawn!What a terrific fight!!  " , GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	//Practice

	else if(pageNumber==practiceBg)
	{  
		//For showing graphics before Practice starts
		if(practicetimer<=300)
		{
			iShowImage(0,0,1280,720,practice3);
			
		     practicetimer++;
		}
		else if(practicetimer>300 && practicetimer<=600)
		{
			iShowImage(0,0,1280,720,practice2);
			practicetimer++;

		}

		else if(practicetimer>600 && practicetimer<=900)
		{
			iShowImage(0,0,1280,720,practice1);
			practicetimer++;
		}
		else if(practicetimer>900 && practicetimer<=1200)
		{
			iShowImage(0,0,1280,720,practicefight);
			practicetimer++;
		}

		else{
		
		jaxx.x=px2;
		iShowImage(0, 0, 1280, 720, PracticeBg);
		reikoMove();
		showMatchTime();
		iSetColor(255,0,0);
		if(pf1==1)		//Showing objects to kill in Practice
			iShowImage(cx1,cy1,500,200,robot);
		if(pf2==1)
			iShowImage(cx2,cy2,500,200,robot);
		if(pf3==1)
			iShowImage(cx3,cy3,500,200,robot);
		if(pf4==1)
			iShowImage(cx4,cy4,500,200,robot);
		if(ef=1)
		{
			if(explosionTime>=0)
			{
				iShowImage(ex,ey,500,200,explosion);
				explosionTime--;
			}
			else
			{
				ef=0;
				ex=5000;
				ey=5000;
				explosionTime=100;
			}
		}

		if(reiko.beam_x>=(cx1-20) && reiko.beam_x<=(cx1+20) && cy1>=120 && cy1<=200)	//Condition of killing object-1 & increasing score
		{
			pf1=0;
				ex=cx1;
				ey=cy1;
				ef=1;
		        cx1=1199;
		        cy1=2;
				pf1=1;
				botKilled++;
		}
		else if(reiko.beam_x>=(cx2-20) && reiko.beam_x<=(cx2+20) && cy2>=120 && cy2<=200)	//Condition of killing object-2 & increasing score
		{
			pf2=0;
				ex=cx2;
				ey=cy2;
				ef=1;
		        cx2=1199;
		        cy2=2;
				pf2=1;
				botKilled++;
		}
		else if(reiko.beam_x>=(cx3-20) && reiko.beam_x<=(cx3+20) && cy3>=120 && cy3<=200)	//Condition of killing object-3 & increasing score
		{
			pf3=0;
				ex=cx3;
				ey=cy3;
				ef=1;
		        cx3=1199;
		        cy3=2;
				pf3=1;
				botKilled++;
		}
		else if(reiko.beam_x>=(cx4-20) && reiko.beam_x<=(cx4+20) && cy4>=120 && cy4<=200)	//Condition of killing object-4 & increasing score
		{
			pf4=0;
				ex=cx4;
				ey=cy4;
				ef=1;
		        cx4=1199;
		        cy4=2;
				pf4=1;
				botKilled++;
		}
		}

	}

	//For Showing PracticeSCore after one practice session done

	else if(pageNumber==practiceScore)
	{
		iShowImage(0, 0, 1280, 720, PracticeScore);
		char Botkilled[10];
		sprintf(Botkilled, "%d" , botKilled);
		iSetColor(51, 255, 51);
		iText(475, 475, "Your Total Kill:", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(645, 475, Botkilled, GLUT_BITMAP_TIMES_ROMAN_24);
		if(botKilled>=50)		//Condition for evaluation of the practice session
			iText(475, 435, "Excellent!You are becoming a PRO!!", GLUT_BITMAP_TIMES_ROMAN_24);
		else if(botKilled>=30 && botKilled<50){
			iSetColor(102, 255, 255);
			iText(475, 435, "Carry On!It's not so far!!", GLUT_BITMAP_TIMES_ROMAN_24);}
		else if(botKilled>=0 && botKilled<30){
			iSetColor(255, 0, 0);
			iText(475, 435, "Whoops!You have to improve.Practice more!!", GLUT_BITMAP_TIMES_ROMAN_24);}
	}

	//For Showing LeaderBoard

	else if(pageNumber==leaderBoard)
	{
		iShowImage(0, 0, 1280, 720, LeaderBoard);
		iSetColor(128, 128, 128);
		iRectangle(200, 100, 850, 480);
		iLine(200, 180, 1050, 180);
		iLine(200, 260, 1050, 260);
		iLine(200, 340, 1050, 340);
		iLine(200, 420, 1050, 420);
		iLine(200, 500, 1050, 500);
		iRectangle(200, 100, 282, 480);
		iRectangle(482, 100, 282, 480);
		iSetColor(0, 255, 255);
		iText(300, 530, "Rank", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(560, 530, "User Name", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(880, 530, "Score", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(250, 450, "#1", GLUT_BITMAP_TIMES_ROMAN_24);		
		iText(250, 370, "#2", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(250, 290, "#3", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(250, 210, "#4", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(250, 130, "#5", GLUT_BITMAP_TIMES_ROMAN_24);
		
		score.sortScore();		//sorting the scores saved in the file
		iText(552,450,score.name[0],GLUT_BITMAP_TIMES_ROMAN_24);	//For Showing names
		iText(552,370,score.name[1],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(552,290,score.name[2],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(552,210,score.name[3],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(552,130,score.name[4],GLUT_BITMAP_TIMES_ROMAN_24);
		
		iText(860,450,score.score2[0],GLUT_BITMAP_TIMES_ROMAN_24);	//For Showing scores
		iText(860,370,score.score2[1],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(860,290,score.score2[2],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(860,210,score.score2[3],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(860,130,score.score2[4],GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
	//For Showing About

	else if(pageNumber==about)
	{
		iShowImage(0, 0, 1280, 720, About);
	}

	//For Showing Help

	else if(pageNumber==help)
	{
		iShowImage(0, 0, 1280, 720, Help);
		iText(100,550,"For Reiko:(User-1) ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(120,500,"To punch press s",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(120,450,"To kick press d",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(120,400,"To use power press a",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(120,350,"To move character press arrows",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(100,300,"For Jaxx:(User-2) ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(120,250,"Use different buttons.",GLUT_BITMAP_TIMES_ROMAN_24);
	}

	//For Quit game

	else if(pageNumber==quit)
	{
		iShowImage(0, 0, 1280, 720, Quit);
		if(cursorMX>=173 && cursorMY>=211 && cursorMX<=516 && cursorMY<=337)
			{
				iSetColor(255, 0, 0);
				iRectangle(174, 212, 342, 124);
				iRectangle(173, 211, 344, 126);
				iRectangle(172, 210, 346, 128);
				iRectangle(171, 209, 348, 130);
			}
		else if(cursorMX>=725 && cursorMY>=218 && cursorMX<=1068 && cursorMY<=345)
			{
				iSetColor(102, 255, 102);
				iRectangle(726, 219, 342, 126);
				iRectangle(725, 218, 344, 128);
				iRectangle(724, 217, 346, 130);
				iRectangle(723, 216, 348, 132);
			}
	}
}
	
/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/

void iMouseMove(int mx, int my)
{
	//place your codes here
	
}

/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/

void iPassiveMouse(int mx, int my)
{
	//place your codes here
	 cursorMX = mx;
     cursorMY = my;
	 printf("%d %d\n",cursorMX,cursorMY);	//printing cursors coordinates in console
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		pic_x = mx;
		pic_y = my;
		if(pageNumber==loading && mx>=967 && mx<=1254 && my>=449 && my<=516){	//For going to userName-1 input by a mouse click on PlayGame
			pageNumber=userName1;
			backgroundMusic=2;	//Changing the music
		}
		else if(pageNumber==loading && mx>=967 && mx<=1254 && my>=372 && my<=439){	//For going to Practice Session by a mouse click on Practice
		    pageNumber=practiceBg;
			backgroundMusic=3;	//Changing the music
		}
		else if(pageNumber==loading && mx>=967 && mx<=1254 && my>=289 && my<=356)	//For going to LeaderBoard by a mouse click on LeaderBoard
		    pageNumber=leaderBoard;
		else if(pageNumber==leaderBoard && mx>=29 && mx<=115 && my>=631 && my<=686)	//For coming back to Menu from LeaderBoard by a mouse click on Back Button 
		    pageNumber=loading;
		else if(pageNumber==loading && mx>=967 && mx<=1254 && my>=207 && my<=276)	//For going to About by a mouse click on About
		    pageNumber=about;
		else if(pageNumber==about && mx>=24 && mx<=112 && my>=642 && my<=693)	//For coming back to Menu from About by a mouse click on Back Button
		    pageNumber=loading;
		else if(pageNumber==loading && mx>=967 && mx<=1254 && my>=123 && my<=190)	//For going to Help by a mouse click on Help
		    pageNumber=help;
		else if(pageNumber==help && mx>=41 && mx<=131 && my>=627 && my<=681)	//For coming back to Menu from Help by a mouse click on Back Button	
		    pageNumber=loading;
		else if(pageNumber==loading && mx>=967 && mx<=1254 && my>=37 && my<=106)	//For going to Quit by a mouse click on Quit
		    pageNumber=quit;
		else if(pageNumber==practiceScore && ((mx>=1141 && mx<=1209 && my>=656 && my<=688) || (mx>=1210 && mx<=1270 && my>=627 && my<=714))){
		    pageNumber=loading;	//For coming back to Menu after showing practice Score by a mouse click on Right Arrow
			backgroundMusic=1;
		}
		else if(pageNumber==matchScore && ((mx>=1141 && mx<=1209 && my>=656 && my<=688) || (mx>=1210 && mx<=1270 && my>=627 && my<=714))){
		    pageNumber=loading;
			backgroundMusic=1;	//Changing Music
		}
		else if(pageNumber==quit && mx>=173 && mx<=516 &&  my>=211 && my<=337)	//For exit from the game
			exit(0);
		else if(pageNumber==quit && mx>=725 && mx<=1068 &&  my>=218 && my<=345)	//For coming back to menu from quit
			pageNumber=loading;
		else if(pageNumber==arena1 || pageNumber==arena2 || pageNumber==arena3)	//For controling player-2(jaxx) using Buttons shown on Screen
		{
		  if(mx>=1214 && mx<=1266 &&  my>=598 && my<=666)
		  {
			jaxx.pos=jaxxMoveForward;
		  }
		  else if(mx>=1090 && mx<=1140 &&  my>=598 && my<=666)
		  {
			jaxx.pos=jaxxMoveBackward;
		  }
		  else if(mx>=1152 && mx<=1202 &&  my>=641 && my<=701 && jaxx.y==50)
		  {
			jaxx.pos=jaxxJump1;
		  }
		  else if(mx>=1152 && mx<=1202 &&  my>=553 && my<=620 && jaxx.y==50)
		  {
			jaxx.pos=jaxxSitdown;
		  }
		  else if(mx>=1089 && mx<=1143 &&  my>=465 && my<=532 && jaxx.beam_flag==1)
		  {
			jaxx.pos=jaxxPower;
			
		  }
		  else if(mx>=1152 && mx<=1206 &&  my>=465 && my<=532 && lifew1>=0)
		  {
			jaxx.pos=jaxxPunch1;
			if(reiko.x>=(jaxx.x-80) && reiko.x<=jaxx.x && reiko.y==jaxx.y){
				lifew1-=5;
				reiko.pos=reikoHurt;
			}
		  }
		  else if(mx>=1215 && mx<=1269 &&  my>=465 && my<=532)
		  {
			jaxx.pos=jaxxKick1;
			if(reiko.x>=(jaxx.x-80) && reiko.x<=jaxx.x && reiko.y==jaxx.y && lifew1>=0){
				lifew1-=10;
				reiko.pos=reikoHurt;
			}
		  }
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		pic_x = 200;
		pic_y = 200;
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/

void iKeyboard(unsigned char key)
{
	if(pageNumber==arena1||pageNumber==arena2||pageNumber==arena3 || pageNumber==practiceBg)	//For controlling player-1(reiko) by using specifief keyboard Buttons
	{
		if(key=='s'){		//Key S for Punching
			reiko.pos=reikoPunch;
			if(reiko.x>=(jaxx.x-80) && reiko.x<=jaxx.x && reiko.y==jaxx.y && lifew2>=0){
				lifew2-=5;
				jaxx.pos=jaxxHurt;
				
			}

			if(pageNumber==practiceBg && (cx1>=(reiko.x+20) && cx1<=(reiko.x+90)) && (cy1>=reiko.y && cy1<=(reiko.y+120)))
			{
				pf1=0;
				ex=cx1;
				ey=cy1;
				ef=1;
		        cx1=1199;
		        cy1=2;
		        pf1=1;
				botKilled++;
			}

			else if(pageNumber==practiceBg && (cx2>=(reiko.x+20) && cx2<=(reiko.x+90)) && (cy2>=reiko.y&& cy2<=(reiko.y+120)))
			{
				pf2=0;
				ex=cx2;
				ey=cy2;
				ef=1;
		        cx2=1199;
		        cy2=2;
		        pf2=1;
				botKilled++;
			}

			else if(pageNumber==practiceBg && (cx3>=(reiko.x+20) && cx3<=(reiko.x+90)) && (cy3>=reiko.y && cy3<=(reiko.y+120)))
			{
				pf3=0;
				ex=cx3;
				ey=cy3;
				ef=1;
		        cx3=1199;
		        cy3=2;
		        pf3=1;
				botKilled++;
			}

			else if(pageNumber==practiceBg && (cx4>=(reiko.x+20) && cx4<=(reiko.x+90)) && (cy4>=reiko.y && cy4<=(reiko.y+120)))
			{
				pf4=0;
				ex=cx4;
				ey=cy4;
				ef=1;
		        cx4=1199;
		        cy4=2;
		        pf4=1;
				botKilled++;
			}
		}
		else if(key == 'd'){		//Key D for Kick
			reiko.pos=reikoKick1;
			if(reiko.x>=(jaxx.x-80) && reiko.x<=jaxx.x && reiko.y==jaxx.y && lifew2>=0){
				lifew2-=10;
				jaxx.pos=jaxxHurt;
				
			}

			if(pageNumber==practiceBg && (cx1>=(reiko.x+20) && cx1<=(reiko.x+90)) && (cy1>=reiko.y && cy1<=(reiko.y+120)))
			{
				pf1=0;
				ex=cx1;
				ey=cy1;
				ef=1;
		        cx1=1199;
		        cy1=2;
		        pf1=1;
				botKilled++;
			}

			else if(pageNumber==practiceBg && (cx2>=(reiko.x+20) && cx2<=(reiko.x+90)) && (cy2>=reiko.y&& cy2<=(reiko.y+120)))
			{
				pf2=0;
				ex=cx2;
				ey=cy2;
				ef=1;
		        cx2=1199;
		        cy2=2;
		        pf2=1;
				botKilled++;
			}

			else if(pageNumber==practiceBg && (cx3>=(reiko.x+20) && cx3<=(reiko.x+90)) && (cy3>=reiko.y && cy3<=(reiko.y+120)))
			{
				pf3=0;
				ex=cx3;
				ey=cy3;
				ef=1;
		        cx3=1199;
		        cy3=2;
		        pf3=1;
				botKilled++;
			}

			else if(pageNumber==practiceBg && (cx4>=(reiko.x+20) && cx4<=(reiko.x+90)) && (cy4>=reiko.y && cy4<=(reiko.y+120)))
			{
				pf4=0;
				ex=cx4;
				ey=cy4;
				ef=1;
		        cx4=1199;
		        cy4=2;
		        pf4=1;
				botKilled++;
			}
		}
		else if(key=='a' && reiko.beam_flag==1){		//Key A for Power throwing
			reiko.pos=reikoPower;	
		}
		else if(key=='m')		//Key M for muting the sound
		{
			PlaySound(0,0,0);
		}
		else if(key=='r')
		{
			//playingSound();
		}
	}
	else if(pageNumber==practiceBg && key == '\b')	//To back from the Practice Session to Menu by pressing backspace Button
	{
		pageNumber=loading;
	}
	else if(pageNumber==leaderBoard && key == '\b')	//To back from the LeaderBoard to Menu by pressing backspace Button
	{
		pageNumber=loading;
	}
	else if(pageNumber==about && key == '\b')	//To back from About to Menu by pressing backspace Button
	{
		pageNumber=loading;
	}
	else if(pageNumber==help && key == '\b')	//To back from Help to Menu by pressing backspace Button
	{
		pageNumber=loading;
	}
	else if(pageNumber==userName1)		//Taking username-1 as input
	{
		int i;
			if(key == '\r')
			{
				strcpy(username1, str1);
				printf("%s\n", username1);
				score.saveName(username1);
				for(i = 0; i < len1; i++)
					str1[i] = 0;
				len1 = 0;
				pageNumber=userName2;
			}
			else
			{
				if(len1!=0 && key=='\b')
				{
					str1[len1-1]=str1[len1];
					len1--;
				}
				else
				{
					str1[len1] = key;
					len1++;
				}
			}
	}
	else if(pageNumber==userName2)		//Taking username-2 as input
	{
		int j;
			if(key == '\r')
			{	
				strcpy(username2, str2);
				printf("%s\n", username2);
				score.saveName(username2);
				for(j = 0; j < len2; j++)
					str2[j] = 0;
				len2 = 0;
				pageNumber=arena1;
				
			}
			else
			{
				if(len2!=0 && key=='\b')
				{
					str2[len2-1]=str2[len2];
					len2--;
				}
				else
				{
					str2[len2] = key;
					len2++;
				}
			}
	}
	else if((pageNumber!=userName1 || pageNumber!=userName2) && key == 'm')
	{
		PlaySound(0,0,0);		//It is used to mute the music
	}
	else if((pageNumber!=userName1 || pageNumber!=userName2) && key == 'r')
	{
		//playingSound();	//defined in the header Sound.h
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/

void iSpecialKeyboard(unsigned char key)
{
	if(pageNumber==arena1||pageNumber==arena2||pageNumber==arena3 || pageNumber==practiceBg)	//For movement of player-1(reiko)
	{
	  if(key == GLUT_KEY_RIGHT)
      {
		reiko.pos=reikoMoveForward;
	  }
	  else if(key == GLUT_KEY_LEFT)
      {
		reiko.pos=reikoMoveBack;
	  }
	  else if(key == GLUT_KEY_UP && reiko.y==50 )
      {
		reiko.pos=reikoJump1;
	  }
	  else if(key == GLUT_KEY_DOWN && reiko.y==50)
      {
		reiko.pos=reikoSitdown;
	  }
	}
}
//Function for reiko beam moving
void reikobeamChange(){
        reiko.beam_x += 10;
		if(reiko.beam_x > 1280 || reiko.beam_x < 0)
			reiko.beam_flag=1;
    }
//Function for jaxx beam moving
void jaxxbeamChange(){
	jaxx.beam_x -= 10;
	if(jaxx.beam_x > 1280 || jaxx.beam_x < 0)
			jaxx.beam_flag=1;
}
//Function for movement of objects in Practice Session
void parasiteChange(){
	cx1-= dx1;
	cy1+= dy1;
	 if(cx1 > 1280 || cx1 < 0)dx1=-dx1;
	  if(cy1 > 720 || cy1 < 0)dy1=-dy1;

	  cx2-= dx2;
	cy2+= dy2;
	 if(cx2 > 1280 || cx2 < 0)dx2=-dx2;
	  if(cy2 > 720 || cy2 < 0)dy2=-dy2;

	  cx3-= dx3;
	cy3-= dy3;
	 if(cx3 > 1280 || cx3 < 0)dx3=-dx3;
	  if(cy3 > 720 || cy3 < 0)dy3=-dy3;

	  cx4-= dx4;
	cy4-= dy4;
	 if(cx4 > 1280 || cx4 < 0)dx4=-dx4;
	  if(cy4 > 720 || cy4 < 0)dy4=-dy4;
}

int main()
{
	cx1=1199;	//initializing the variables
	cy1=2;
	cx2=1199;
	cy2=102;
	cx3=1199;
	cy3=202;
	cx4=1199;
	cy4=302;
	dx1=5;
	dy1=5;
	dx2=6;
	dy2=8;
	dx3=8;
	dy3=4;
	dx4=2;
	dy4=5;
	lifew1=278;
	lifeh1=18;
	lifew2=278;
	lifeh2=18;
	str1[0]=0;
	str2[0]=0;

	parasiteTimer = iSetTimer(20, parasiteChange);	//timer functions
	reiko.beam_timer = iSetTimer(1, reikobeamChange);
	jaxx.beam_timer = iSetTimer(1, jaxxbeamChange);

	iInitialize(1280, 720, "Universe of Battle");
	
	pic_x = 200;
	pic_y = 200;

	// loading images.
	/* iLoadImage() will return an interger type id
	   for each image you load.
	*/

	Loadimage();	//For loading images,defined in Loadimage.h Header File

	iStart();	// it will start drawing

	return 0;
}