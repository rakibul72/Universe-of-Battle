#ifndef LOADIMAGE_H_INCLUDED
#define LOADIMAGE_H_INCLUDED

int LeaderBoard,Loading2,Loading3,Loading4,Loading5,Loading6,Menu,Arena1,Arena2,Arena3,Platform1,Platform2,Platform3,PracticeBg,About,Help,Quit,Username;
int reikostand,reikopunch,reikomove,reikokick1,reikokick2,reikokick3,reikojump1,reikojump2,reikopower,reikobeam,reikositdown,reikodeath,reikohurt;
int jaxxmoveforward,jaxxmovebackward,jaxxstand,jaxxjump1,jaxxjump2,jaxxkick1,jaxxkick2,jaxxpower,jaxxpunch1,jaxxpunch2,jaxxsitdown,jaxxdeath,jaxxbeam,jaxxhurt;
int digit0,digit1,digit2,digit3,digit4,digit5,digit6,digit7,digit8,digit9,arrowUp,arrowDown,arrowLeft,arrowRight,buttonA,buttonS,buttonD;
int round1,round2,round3;
int px1=40,py1=50,px2=1200,py2=50;
int pageNumber;
int explosion,robot;
int round11,round12,round13,round1fight;
int practice1,practice2,practice3,practicefight;
enum pageNumber{loading,arena1,arena2,arena3,practiceBg,leaderBoard,about,help,quit,userName1,userName2,practiceScore,matchScore};
enum reikopos{reikoStand,reikoPunch,reikoKick1,reikoKick2,reikoKick3,reikoMoveForward,reikoMoveBack,reikoJump1,reikoJump1Stand,reikoJump2,reikoPower,reikoSitdown,reikoDeath,reikoHurt};
enum jaxxpos{jaxxStand,jaxxMoveForward,jaxxMoveBackward,jaxxJump1,jaxxJump1Stand,jaxxJump2,jaxxKick1,jaxxKick2,jaxxPower,jaxxPunch1,jaxxPunch2,jaxxSitdown,jaxxDeath,jaxxHurt};
int round31,round32,round33,round3fight;
int round21,round22,round23,round2fight;
int hurtTimer=50;
int PracticeScore,MatchScore;
enum Stop{stop};

void Loadimage()		//Loading all necessary images for further use
{
    LeaderBoard = iLoadImage("images\\LeaderBoard2.jpg");
	Loading2 = iLoadImage("images\\Loading2.png");
	Loading3 = iLoadImage("images\\Loading3.png");
	Loading4 = iLoadImage("images\\Loading4.png");
	Loading5 = iLoadImage("images\\Loading5.png");
	Loading6 = iLoadImage("images\\Loading6.png");
	Menu = iLoadImage("images\\Menu.png");
	Arena1 = iLoadImage("images\\bg1.png");
	Platform1= iLoadImage("images\\plat1.jpg");
	Arena2 = iLoadImage("images\\bg2.png");
	Platform2= iLoadImage("images\\plat2.png");
	Arena3 = iLoadImage("images\\bg3.png");
	Platform3= iLoadImage("images\\plat3.png");
	PracticeBg = iLoadImage("images\\practicebg.png");
	About = iLoadImage("images\\About.png");
	Help = iLoadImage("images\\Help.jpg");
	Quit = iLoadImage("images\\Quit.png");
	reikostand= iLoadImage("images\\reikostand.png");
	reikopunch= iLoadImage("images\\reikopunch.png");
	reikokick1= iLoadImage("images\\reikokick1.png");
	reikokick2= iLoadImage("images\\reikokick2.png");
	reikokick3= iLoadImage("images\\reikokick3.png");
	reikomove= iLoadImage("images\\reikomove.png");
	reikopower=iLoadImage("images\\reikopower.png");
	reikojump1=iLoadImage("images\\reikojump1.png");
	reikojump2=iLoadImage("images\\reikojump2.png");
	reikobeam=iLoadImage("images\\reikobeam.png");
	reikodeath=iLoadImage("images\\reikodeath.png");
	reikositdown=iLoadImage("images\\reikositdown.png");
	reikohurt=iLoadImage("images\\reikohurt.png");
	digit0=iLoadImage("images\\0.png");
	digit1=iLoadImage("images\\1.png");
	digit2=iLoadImage("images\\2.png");
	digit3=iLoadImage("images\\3.png");
	digit4=iLoadImage("images\\4.png");
	digit5=iLoadImage("images\\5.png");
    digit6=iLoadImage("images\\6.png");
	digit7=iLoadImage("images\\7.png");
	digit8=iLoadImage("images\\8.png");
	digit9=iLoadImage("images\\9.png");
	jaxxmoveforward=iLoadImage("images\\jaxxmove1.png");
	jaxxmovebackward=iLoadImage("images\\jaxxmove2.png");
	jaxxstand=iLoadImage("images\\jaxxstand.png");
	jaxxjump1=iLoadImage("images\\jaxxjump1.png");
	jaxxjump2=iLoadImage("images\\jaxxjump2.png");
	jaxxkick1=iLoadImage("images\\jaxxkick1.png");
	jaxxkick2=iLoadImage("images\\jaxxkick2.png");
	jaxxpower=iLoadImage("images\\jaxxpower.png");
	jaxxpunch1=iLoadImage("images\\jaxxpunch1.png");
	jaxxpunch2=iLoadImage("images\\jaxxpunch2.png");
	jaxxsitdown=iLoadImage("images\\jaxxsitdown.png");
	jaxxdeath=iLoadImage("images\\jaxxdeath.png");
	jaxxbeam=iLoadImage("images\\jaxxbeam.png");
	jaxxhurt=iLoadImage("images\\jaxxhurt.png");
	arrowUp=iLoadImage("images\\Up.png");
	arrowDown=iLoadImage("images\\Down.png");
	arrowLeft=iLoadImage("images\\Left.png");
	arrowRight=iLoadImage("images\\Right.png");
	buttonA=iLoadImage("images\\A.png");
	buttonS=iLoadImage("images\\S.png");
	buttonD=iLoadImage("images\\D.png");
	round1=iLoadImage("images\\round1.png");
	round2=iLoadImage("images\\round2.png");
	round3=iLoadImage("images\\round3.png");
	Username=iLoadImage("images\\Username.jpg");
	explosion=iLoadImage("images\\explosion.png");
	robot=iLoadImage("images\\robot.png");

	round11=iLoadImage("images\\round11.png");
	round12=iLoadImage("images\\round12.png");
	round13=iLoadImage("images\\round13.png");
	round1fight=iLoadImage("images\\round1fight.png");

	
	round31=iLoadImage("images\\round31.png");
	round32=iLoadImage("images\\round32.png");
	round33=iLoadImage("images\\round33.png");
	round3fight=iLoadImage("images\\round3fight.png");

	round21=iLoadImage("images\\round21.png");
	round22=iLoadImage("images\\round22.png");
	round23=iLoadImage("images\\round23.png");
	round2fight=iLoadImage("images\\round2fight.png");

	practice1=iLoadImage("images\\practice1.png");
	practice2=iLoadImage("images\\practice2.png");
	practice3=iLoadImage("images\\practice3.png");
	practicefight=iLoadImage("images\\practicefight.png");



	PracticeScore=iLoadImage("images\\practicescore.png");
	MatchScore=iLoadImage("images\\mainscore.png");
}

#endif // LOADIMAGE_H_INCLUDED
