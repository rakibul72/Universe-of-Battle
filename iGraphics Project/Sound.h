#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED

int sf=1;

void playingSound()		//Function for playing Sound
{
	if(sf==1)
	{
			PlaySound("music/BackgroundMusic.wav",NULL,SND_LOOP | SND_ASYNC);//to play a sound use it
	}
	else if(sf==0)
		PlaySound(0,0,0);

	//To stop the music use: PlaySound(0,0,0);
}

#endif // SOUND_H_INCLUDED
