#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

struct Score		//Structure for Score
{
    char name[1000][100];
	int score[1000];
	char score2[1000][100];
	int count,scoreIndex;
    Score()
    {
       ;
    }

	void saveName(char *name)		//Saving name to the file
	{
		FILE* leaderboard=fopen("leaderboard.txt","a");
		strcpy(this->name[count],name);
		fprintf(leaderboard,"%s\n",this->name[count]);
		count++;
		fclose(leaderboard);
	}


	void sortScore()		//Sorting scores stored in the file
	{ 

	 int totalELement=0,n;

	  FILE* scoreboard =fopen("scoreboard.txt","r");
    while(fscanf(scoreboard,"%d",&score[totalELement])!=EOF)
    {
		totalELement++;
       
    }
    fclose(scoreboard);

	    FILE* leaderboard=fopen("leaderboard.txt","r");
		for(int i=0;i<totalELement;i++)
		{   
			

			fscanf(leaderboard,"%s",&name[i]);
			
		}
		fclose(leaderboard);
		char temp[1000];
		int swap;
		for(int c = 0 ; c < totalELement- 1; c++)
		{
			for (int d = 0 ; d < totalELement - c - 1; d++)
			{
			  if (score[d] < score[d+1])
			  {
					swap=score[d];
					score[d]=score[d+1];
					score[d+1]=swap;
					strcpy(temp,name[d]);
					strcpy(name[d],name[d+1]);
					strcpy(name[d+1],temp);
			  }
			}
		}
		for(int i=0;i<totalELement;i++)
		{
			sprintf(score2[i], "%d" , score[i]);
		}
	}
};
Score score;

#endif // SCORE_H_INCLUDED
