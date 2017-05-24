//KAMIL BOGUMI£, DragonLord v1 @2017, Wszelkie prawa zastrzezone.
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <ctime>
#include <time.h>
using namespace std;
int punkty;
int tmp1= 10;
int atak;
int unik;
int zmienna;
string M;
string G;
char X;
string imie;
char s;
int a;
int zliczacz;

using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoXY(int x, int y, string text);
void gotoXY(int x, int y);
void gotoXY(int x, int y, string text)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console,CursorPosition);
	cout << text;
}

void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
}




//string sbohatera[6]={"sila","hp","dex","lvl","exp"};
int sbohatera[7]={5,0,0,1,1000,1000};//{"dmg","hp","dex","lvl","exp","gold"};
int przyjaciel[7]={5,10,0,1,1000,1000};//{"dmg","hp","dex","lvl","exp","gold};
int GOSPODARZ[7]={5,10,0,1,1000,1000};//{"dmg","hp","dex","lvl","exp","gold};
int elf[7]={5,10,0,1,1000,1000};//{"dmg","hp","dex","lvl","exp","gold};
int bandyta[7]={10,10,0,1,1000,1000};//{"dmg","hp","dex","lvl","exp","gold};
int ork[7]={10,50,0,1,1000,1000};//{"dmg","hp","dex","lvl","exp","gold};
int smok[7]={1000,1000,0,5,1000,1000};//{"dmg","hp","dex","lvl","exp","
void eq()
{

	cout<<"Twoj aktualny inwentarz sklada sie z..: "<<endl;
	if(sbohatera[4]==1000)
	{
		cout<<"Palka Bojowa DMG +5"<<endl;
		cout<<"Jaszczurza Zbroja HP +10"<<endl;
	}
		if(sbohatera[4]==2000)
	{
		cout<<"Palka Bojowa DMG +5"<<endl;
		cout<<"Jaszczurza Zbroja HP +10"<<endl;
	}
		if(sbohatera[4]==3000)
	{
		cout<<"Palka Bojowa DMG +5"<<endl;
		cout<<"Jaszczurza Zbroja HP +10"<<endl;
	}
		if(sbohatera[4]==4000)
	{
		cout<<"Palka Bojowa DMG +5"<<endl;
		cout<<"Jaszczurza Zbroja HP +10"<<endl;
	}
		if(sbohatera[4]==5000)
	{
		cout<<"Smocza zbroja DMG +5"<<endl;
		cout<<"Kosciany miecz HP +10"<<endl;
	}
		if(sbohatera[4]==9000)
	{
		cout<<"CASE DRAGON LORD HP +NaN"<<endl;
		cout<<"SWORD DRAGON LORD DMG +NaN"<<endl;

	}






}



void enter(){
	cout<<endl;
		cout<<endl;
			cout<<endl;
}


void tworcy()
{
cout<<"Tworcamy niniejszej gry jest: "<<endl<<"Kamil Bogumil"<<endl<<"Dominik Kludiewicz"<<endl<<"Sergiej Fedotov"<<endl<<"ALL RIGHTS RESERVED @2017"<<endl;

}


void czolowka()
{


cout<<"88888888ba,                                                                       88                                             88                                 888888 "<<endl;
cout<<"88        8b                                                                      88                                             88                    8b       d8      88 "<<endl;
cout<<"88         8b                                                                     88                                             88                    `8b     d8'      88   "<<endl;
cout<<"88         88  8b,dPPYba,  ,adPPYYba,   ,adPPYb,d8   ,adPPYba,   8b,dPPYba,       88            ,adPPYba,   8b,dPPYba,   ,adPPYb,88                     `8b   d8'       88  "<<endl;
cout<<"88         88  88P'    Y8           Y8  a8      Y88  a8      8a  88P      8a      88           a8       8a  88P     Y8  a8      Y88                      `8b,d8'        88  "<<endl;
cout<<"88         8P  88          ,adPPPPP88  8b       88  8b       d8  88       88      88           8b       d8  88          8b       88                         8           88  "<<endl;
cout<<"88      .a8P   88          88,    ,88   8a,   ,d88   8a,   ,a8   88       88      88            8a,   ,a8   88           8a,   ,d88                    "<<endl;
cout<<"88888888Y      88            8bbdP Y8    YbbdP Y8    YbbdP       88       88      88888888888     YbbdP     88            8bbdP Y8                     "<<endl;
cout<<endl;
cout<<"	_____________________________________________,d888 `____________ "<<endl;
cout<<"____________________________________________,d88`_ _____________ "<<endl;
cout<<"__________________________________________,d88`___ _____________ "<<endl;
cout<<"_________________________________________,d8`_____ _____________ "<<endl;
cout<<"_______________________________________,d8*_______ _____________ "<<endl;
cout<<"_____________________________________,d88*________ _____..d*`__ "<<endl;
cout<<"___________________________________,d88`_________. .d8*`________ "<<endl;
cout<<"_________________________________,d888`____..d8P*` _____________ "<<endl;
cout<<"_________________________._____,d8888*8888*`______ _____________ "<<endl;
cout<<"_______________________,*_____,88888*8P*__________ _____________ "<<endl;
cout<<"_____________________,*______d888888*8b.__________ _____________ "<<endl;
cout<<"___________________,P_______d8__*888.*888b._______ _____________ "<<endl;
cout<<"_________________,8*________8____*888__`*88888b._ _____________ "<<endl;
cout<<"_______________,d8________________*88___________*8 8b.__________ "<<endl;
cout<<"______________d8`__________________*8b____________ ___*8b.______ "<<endl;
cout<<"____________,d8`____________________*8.___________ _______*88b._ "<<endl;
cout<<"___________d8P_______________________88.__________ _____________ "<<endl;
cout<<"_________,88P________________________888__________ _____________ "<<endl;
cout<<"________d888*_______.d88P____________888__________ _____________ "<<endl;
cout<<"______d8888b..d888888*______________888__________ _____________ "<<endl;
cout<<"_____,888888888888888b.______________888__________ _____________ "<<endl;
cout<<"____,8*;88888P*788888888ba._____888___________ ____________ "<<endl;
cout<<"___,8;,8888*________`88888*__________d88*_________ ______________ "<<endl;
cout<<"___)8e888*__________,88888be.________888__________ ______________                                Mozesz rowniez stworzyc wlasna fabule DragonLord'a!, wystarczy edytowac pliki tekstowe.  "<<endl;
cout<<"__,d888`___________,8888888*_____d888___________ _____________ "<<endl;
cout<<"_,d88P`___________,8888888Pb._____d888`___________ _____________                                     KAMIL BOGUMIL"<<endl;
cout<<"_888*____________,88888888*___.d8888*____________ _____________                                      DOMINIK KLUDKIEWICZ"<<endl;
cout<<"_`88____________,888888888____.d88888b____________ _____________                                     SERGIEJ FEDOTOV"<<endl;
cout<<"__`P___________,8888888888bd888888*_______________ _____________                                     KAMIL HODYNA"<<endl;
cout<<"_______________d888888888888d888*_________________ _____________ "<<endl;
cout<<"_______________8888888888888888b._________________ _____________ "<<endl;
cout<<"_______________88*._*88888888888b.________.db_____ _____________ "<<endl;
cout<<"_______________`888b.`8888888888888b._.d8888P_____ _____________ "<<endl;
cout<<"________________*88b.`*8888888888888888888888b... _____________ "<<endl;
cout<<"_________________*888b.`*8888888888P*78888888888 88e.________ "<<endl;
cout<<"__________________88888b.`*.d8888b*`88888P *___________ "<<endl;
cout<<"__________________`888888b_____.d88888888888*`888 8.___________ "<<endl;
cout<<"___________________)888888.___d888888888888P___`88 88888b.______ "<<endl;
cout<<"__________________,88888*____d88888888888*`____`8 888b_________ "<<endl;
cout<<"_________________,8888*____.8888888888P`__________ `888b.________ "<<endl;
cout<<"________________,888*______888888888b...__________ __`888P88b.____ "<<endl;
cout<<"_______.db.___,d88*________88888888888888b________ __`8888_______ "<<endl;
cout<<"___,d888888b.8888`_________`*888888888888888888P`_ __`888b._____ "<<endl;
cout<<"__/*8888b*`______________`*8888P*``8888`______ _`8888b.__ "<<endl;
cout<<"_______/*88`_________________.ed8b..__.d888P`____________ `88888_ "<<endl;
cout<<"____________________________d8*888888888P*_______ ________`88b_ "<<endl;
cout<<"___________________________(*``,d8888*`_________ ___________`88 "<<endl;
cout<<"______________________________(*`_________________ ______________`8 "<<endl;
cout<<endl;
cout<<"Witaj w DragonLord (v.1.07) graczu, Milej zabawy w tego TextRPGa!! "<<endl;
cout<<"Najnowszy DragonLord tutaj: "<<"https://github.com/Paszeko"<<endl;
Sleep(1000);
}

void stats()
{
cout<<"Twoje Finalne statystki: "<<endl<<"HP: "<<sbohatera[1]*10<<endl<<"MANA: "<<sbohatera[2]*1<<endl<<"Twoj obecny lvl: "<<sbohatera[3]<<endl<<"Ilosc EXP: "<<sbohatera[4]<<endl<<"DMG"<<endl<<sbohatera[0]<<endl<<"GOLD: "<<sbohatera[5]<<endl;

}


void menu(){

//MENU
cout<<"Wybierz opcje MENU"<<endl;
cout<<"[1]- Bohater"<<endl;
cout<<"[2]- EKWIPUNEK"<<endl;
cout<<"[3]- TWORCY"<<endl;
cout<<"[4]- WYJDZ Z MENU"<<endl;
cin>>zmienna;

switch(zmienna)
{
case 1:
   cout<<"Bohater: "<<endl<<imie<<endl;
   stats();
   Sleep(100);
cout<<"Wpisz ok aby kontynowac: "<<endl;
cin>>G;
if(G=="OK"|| G=="ok" )
{
	 Sleep(100);
		 system("cls");
menu();
}
else{
	if(G!="OK"|| G!="ok" )
	{
		cout<<"TY OSZUSCIE NIE WPISALES OK!!!!"<<endl;
		 Sleep(2000);
		 system("cls");
	}
}
break;
    menu();


case 2:
    eq();
    Sleep(100);
cout<<"Wpisz ok aby kontynowac: "<<endl;
cin>>G;
if(G=="OK"|| G=="ok" )
{
	 Sleep(100);
		 system("cls");
menu();
}
else{
	if(G!="OK"|| G!="ok" )
	{
		cout<<"TY OSZUSCIE NIE WPISALES OK!!!!"<<endl;
		 Sleep(2000);
		 system("cls");
	}
}
break;
    menu();


    //...
case 3:
    tworcy();
     Sleep(100);
cout<<"Wpisz ok aby kontynowac: "<<endl;
cin>>G;
if(G=="OK"|| G=="ok" )
{
	 Sleep(100);
		 system("cls");
menu();
}
else{
	if(G!="OK"|| G!="ok" )
	{
		cout<<"TY OSZUSCIE NIE WPISALES OK!!!!"<<endl;
		 Sleep(2000);
		 system("cls");
	}
}

    break;
    menu();
case 4:
	Sleep(100);
	cout<<"Wyjdz";
	break;
}
}


void podmenu(){

//MENU
int ekran1m;
	cout<<"Wybierz opcje MENU"<<endl;
cout<<"[1]- Bohater"<<endl<<"[2]- Menu"<<endl<<"[3]- Wyjdz"<<endl;
cin>>ekran1m;

switch( ekran1m )
{
case 1:
    Sleep(100);
    stats();
    break;

case 2:
    Sleep(100);
    menu();
    break;

    //...
case 3:
    cout<<"Wyjdz"<<endl;
    break;
}

}

void animacja()
{
    system("cls");
  	string Plane[]=
	{"               (^^)                   / ('')   /       "
	,"                ||                   /   ||   /        "
	,"             /|    |\                  |    |          "
	,"            / |    |-\[;;;;;>          |    |          "
	,"               |  |                     |  |           "
	,"              _|  |_                   _|  |_          "
	,"                                                       "
	,"                                                       "};

	char holder = ' ';

	int len, x, y;

	len = Plane[0].length();
do{
    zliczacz=zliczacz+1;
		for (y=0;y<7;y++)
		{
			gotoXY(11,1+y,Plane[y]);
		}

		for (y=0;y<7;y++)
		{
			holder = Plane[y][len];
			for (x=len;x>0;x--)
			{
				Plane[y][x]=Plane[y][x-1];
			}
			Plane[y][0]=holder;
		}

Sleep(30);

}while(zliczacz<50);


}



int main()
{
//animacja -------------------------------------------------------------

	system("mode 650");



    system("01.mp3");
	srand(time(NULL));


    czolowka();

	cout<<"Podaj imie bohatera"<<endl;
cin>>imie;
Sleep(1000);
cout<<"Twoje imie to: "<<imie<<endl;
cout<<"Teraz Wybierz Statystyki poczatkowe "<<imie<<"a"<<endl;
do{
cout<<"Wytrzymalosc = max punktow 10 (Tylko CYFRY!)"<<endl;
cin>>sbohatera[1];

if(sbohatera[1]>10)
{
	cout<<"Nie mozesz tego zrobic moj panie...max 10"<<endl;
}

}while (sbohatera[1]>10);
punkty=10-sbohatera[1];
do{

cout<<"zwinnosc = max punktow: " <<punkty<<"(Tylko CYFRY!)"<<endl;
cin>>sbohatera[2];

if(sbohatera[2]>punkty)
{
	cout<<"Nie mozesz tego zrobic moj panie...max 10"<<endl;
}

}while (sbohatera[2]>punkty);

system("cls");
cout<<"Twoje Finalne statystki: "<<endl<<"HP: "<<sbohatera[1]*10<<endl<<"MANA: "<<sbohatera[2]*1<<endl<<"Twoj obecny lvl: "<<sbohatera[3]<<endl<<"Ilosc EXP: "<<sbohatera[4]<<endl<<"DMG"<<endl<<sbohatera[0]<<endl;
enter();

int HPbohatera=sbohatera[1]*10;
int DEXbohatera=sbohatera[2]*1;

	/*
	HANDLE okno = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD size;
    size.X = 1000;
    size.Y = 3000;
    SetConsoleScreenBufferSize(okno, size);
*/

int zgon=0;



//KOD ODPOWIEDZIALNY ZA ODNOSZENIE SIE DO MENU
cout<<"Czy chcesz uzyc MENU ? TAK LUB NIE"<<endl;
cin>>M;
system("cls");
if(M=="TAK"|| M=="tak" || M=="Tak" )
{

menu();

}

/*else{
	Sleep(200);
	cout<<"Poczatek";
	Sleep(200);
}
*/
/////////////////////////////////////////////////////////START FABU£Y///////////////////////////////////////////////////////////////////////////////////////////////////////
	Sleep(200);
	cout<<"Poczatek"<<endl;
	Sleep(200);
//Wczytywanie Pliku
fstream plik("ekran1.txt", ios::in);
string dane;
if(plik.good()==false)
{
    cout<<"Plik nie istnieje!"<<endl;
    exit(0);
}

  for(int x=0; x<20; x++)
  {
 getline(plik, dane);
  cout<<dane<<endl;
  }


int ekran1mm;
cout<<"Wybierz opcje MENU"<<endl;
cout<<"[1]- Zabij Gospodarza bo tak..(to moze byc niebezpieczne..)"<<endl<<"[2]- Menu(niestabilne)"<<endl<<"[3]- Nie rob nic. "<<endl;
cin>>ekran1mm;


switch( ekran1mm )
{
case 1:
    Sleep(100);
  cout<<"PRECZ ZARAZO !"<<endl;

cout<<"Gospodarz- Hej, co ty robisz ?!"<<endl;
//sbohatera[6]={5,0,0,1,1000};//{"dmg","hp","dex","lvl","exp"};
//BOT[6]={5,10,0,1,1000};//{"dmg","hp","dex","lvl","exp"};

cout<<"WALKA START!!!!!!!!"<<endl;

do
{

  int kostka6=rand()%6+1;
   int kostka10=rand()%10+1;

if(kostka6==1 ){

        HANDLE kolor;
kolor = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor, 4);

    cout<<"                                               Pozostale zycie bohatera: "<<sbohatera[1]--*GOSPODARZ[0]<<endl<<endl;
    Sleep(400);
    cout<<"                                               Pozostale zycie przyjaciela: "<<przyjaciel[1]--*GOSPODARZ[0]<<endl<<endl;

    Sleep(400);
}

if(kostka6==3){

            HANDLE kolor1;
kolor1 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor1, 2 );

cout<<"                                                   Pozostale zycie gospodarza odebrane przez bohatera!!!: "<<GOSPODARZ[1]--*sbohatera[0]<<endl;
Sleep(400);
cout<<"                                                   Pozostale zycie gospodarza odebrane przez przyjaciela!!!: "<<przyjaciel[1]--*sbohatera[0]<<endl;
 Sleep(400);
}

if(GOSPODARZ[1]==0)
{

    cout<<"Wygrales !!!"<<endl;;

                HANDLE kolor2;
kolor2 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor2, 7 );//bialy kolor
//animacja();
    break;
    system("pause");


}
if(sbohatera[1]==0)
{
    cout<<"Wygral Gospodarz !!!!!!!!"<<endl;
cout<<"                                                         KONIEC GRY !!!!!!!!"<<endl;
Sleep(2000);
system("pause");

system("gameover.exe");
system("taskkill /F /IM game.exe");
system("taskkill /F /IM winamp.exe");//dla starszych systemow
system("taskkill /F /IM wmplayer.exe");//dla starszych systemow
system("taskkill /F /IM Music.UI.exe");//dla windows 10


//system("taskkill /F /IM cb_console_runner.exe");//dla windows 10

    break;
}

}while(true);


    break;

case 2:
    Sleep(100);
    menu();
    system("cls");
    podmenu();
    break;

    //...
case 3:
    cout<<"W takim razie bywaj.."<<endl;

      break;

       Sleep(1000);
}
system("cls");















 fstream plik1("ekran2.txt", ios::in);
string dane1;
if(plik.good()==false)
{
    cout<<"Plik nie istnieje!"<<endl;
    exit(0);
}
for(int x=0; x<17; x++)
  {
 getline(plik1, dane1);
  cout<<dane1<<endl;
  }

cout<<"Witaj w sklepie towarzyszu, dostales jedna z nie wielu okazji w grze na zakupienie czegos u nas ?, Na co sie decydujesz ? "<<endl;
cout<<"Aktualnie posiadasz: "<<sbohatera[5]<<" zlota"<<endl;
cout<<"Co chcialbys u nas zakupic: ?"<<endl;
cout<<"Lecznie- 500 sztuk zlota ? [1]"<<endl;
cout<<"Mocny Miecz+ 20 dmg do statystyki- 5000 sztuk zlota ? [2]"<<endl;
int buy;
cin>>buy;


switch( buy )
{
case 1:

    if(sbohatera[5]==600 || sbohatera[5]>600)
        {
        sbohatera[5]-600;
        sbohatera[1]=0;
        sbohatera[1]=100;
        cout<<"GRATULUJE TWOJE ZYCIE ZOSTALO ZREGENEROWANE"<<endl;
        stats();
    }
    else
        cout<<"Niestety nie mozesz tego zrobic, masz za malo pieniedzy, PRECZ, NIE ZAWRACAJ MI GLOWY !"<<endl;
        stats();

    break;

case 2:
   if(sbohatera[5]==5000 || sbohatera[5]>5000)
        {
        sbohatera[5]-5000;
        sbohatera[0]=0;
        sbohatera[0]=25;
        cout<<"KUPILES SWOJ MIECZ CZUJESZ SIE POTEZNIEJSZY...Dziekujemy!"<<endl;
        stats();
    }
    else
        cout<<"Niestety nie mozesz tego zrobic, masz za malo pieniedzy, PRECZ, NIE ZAWRACAJ MI GLOWY !"<<endl;
        stats();

    break;

    //...
case 3:
    //jakiś kod
    break;

}

system("pause");
cout<<"W koncu udaje wam sie wyruszyc."<<endl;





system("cls");
 fstream plik2("ekran3.txt", ios::in);
string dane2;
if(plik.good()==false)
{
    cout<<"Plik nie istnieje!"<<endl;
    exit(0);
}
for(int x=0; x<40; x++)
  {
 getline(plik2, dane2);
  cout<<dane2<<endl;
  }

enter();




cout<<"Wybierz opcje MENU"<<endl;
cout<<"[1]- Nie, obejdzmy ich do okola."<<endl<<"[2]- Tak."<<endl;

int ekran33;
cin>>ekran33;
switch( ekran33 )
{
case 1:
    //jaki� kod
    break;
    
case 2:
   
   
   
   cout<<"WALKA START!!!!!!!!"<<endl;

do
{

  int kostka6=rand()%6+1;
   int kostka10=rand()%10+1;

if(kostka6==1 ){

        HANDLE kolor;
kolor = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor, 4);

    cout<<"                                               Pozostale zycie bohatera: "<<sbohatera[1]--*bandyta[0]<<endl<<endl;
    Sleep(400);
    cout<<"                                               Pozostale zycie przyjaciela: "<<przyjaciel[1]--*bandyta[0]<<endl<<endl;
     Sleep(400);
cout<<"                                                Pozostale zycie przyjaciela: "<<elf[1]--*bandyta[0]<<endl<<endl;
    Sleep(400);
}

if(kostka6==3){

            HANDLE kolor1;
kolor1 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor1, 2 );

cout<<"                                                   Pozostale zycie gospodarza odebrane przez bohatera!!!: "<<bandyta[1]--*sbohatera[0]<<endl;
Sleep(400);
cout<<"                                                   Pozostale zycie gospodarza odebrane przez przyjaciela!!!: "<<bandyta[0]--*przyjaciel[1]<<endl;
 Sleep(400);
cout<<"                                                   Pozostale zycie gospodarza odebrane przez Elfa!!!: "<<bandyta[0]--*elf[1]<<endl;
 Sleep(400);
}

if(bandyta[1]==0)
{

    cout<<"TWOJA DRUZYNA ZWYCIEZYLA!!!!!"<<endl;;

                HANDLE kolor2;
kolor2 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor2, 7 );//bialy kolor
//animacja();
    break;
    system("pause");


}
if(sbohatera[1]==0)
{
    cout<<"Wygral BANDYTA !!!!!!!!"<<endl;
cout<<"                                                         KONIEC GRY !!!!!!!!"<<endl;
Sleep(2000);
system("pause");

system("gameover.exe");
system("taskkill /F /IM game.exe");
system("taskkill /F /IM winamp.exe");//dla starszych systemow
system("taskkill /F /IM wmplayer.exe");//dla starszych systemow
system("taskkill /F /IM Music.UI.exe");//dla windows 10


//system("taskkill /F /IM cb_console_runner.exe");//dla windows 10

    break;
}

}while(true);
   
    break;

}

 fstream plik3("ekran4.txt", ios::in);
string dane3;
if(plik.good()==false)
{
    cout<<"Plik nie istnieje!"<<endl;
    exit(0);
}
for(int x=0; x<40; x++)
  {
 getline(plik3, dane3);
  cout<<dane3<<endl;
  }




cout<<"Wybierz opcje MENU"<<endl;
cout<<"[1]-Nie mamy czasu na postoj."<<endl<<"[2]-Mysle ze pare godzin snu zawsze sie przyda."<<endl;
int zmienna45;
cin>>zmienna45;

switch( zmienna45 )
{
case 1:
  
   cout<<"Nagle wpadliscie w zasadzke orkow."<<endl;

do
{

  int kostka6=rand()%6+1;
   int kostka10=rand()%10+1;

if(kostka6==1 ){

        HANDLE kolor;
kolor = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor, 4);

    cout<<"                                               Pozostale zycie bohatera: "<<sbohatera[1]--*ork[0]<<endl<<endl;
    Sleep(400);
    cout<<"                                               Pozostale zycie przyjaciela: "<<przyjaciel[1]--*ork[0]<<endl<<endl;
     Sleep(400);
cout<<"                                                Pozostale zycie przyjaciela: "<<elf[1]--*ork[0]<<endl<<endl;
    Sleep(400);
}

if(kostka6==3){

            HANDLE kolor1;
kolor1 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor1, 2 );

cout<<"                                                   Pozostale zycie orkow odebrane przez bohatera!!!: "<<ork[1]--*sbohatera[0]<<endl;
Sleep(400);
cout<<"                                                   Pozostale zycie orkow odebrane przez przyjaciela!!!: "<<ork[0]--*przyjaciel[1]<<endl;
 Sleep(400);
cout<<"                                                   Pozostale zycie orkow odebrane przez Elfa!!!: "<<ork[0]--*elf[1]<<endl;
 Sleep(400);
}

if(ork[1]==0)
{

    cout<<"TWOJA DRUZYNA ZWYCIEZYLA!!!!!"<<endl;;

                HANDLE kolor2;
kolor2 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor2, 7 );//bialy kolor
//animacja();
    break;
    system("pause");


}
if(sbohatera[1]==0)
{
    cout<<"ORKI WAS ZABILY !!!!!!!!"<<endl;
cout<<"                                                         KONIEC GRY !!!!!!!!"<<endl;
Sleep(2000);
system("pause");

system("gameover.exe");
system("taskkill /F /IM game.exe");
system("taskkill /F /IM winamp.exe");//dla starszych systemow
system("taskkill /F /IM wmplayer.exe");//dla starszych systemow
system("taskkill /F /IM Music.UI.exe");//dla windows 10


//system("taskkill /F /IM cb_console_runner.exe");//dla windows 10

    break;
}

}while(true);

    break;
    
case 2:
  
    cout<<"Nagle wpadliscie w zasadzke orkow."<<endl;
 cout<<"Jako ze udalo wam sie troche odpoczac dostalisce bonus HP."<<endl;
 elf[1]=100;
 przyjaciel[1]=100;
 sbohatera[1]=100;
do
{

  int kostka6=rand()%6+1;
   int kostka10=rand()%10+1;

if(kostka6==1 ){

        HANDLE kolor;
kolor = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor, 4);

    cout<<"                                               Pozostale zycie bohatera: "<<sbohatera[1]--*ork[0]<<endl<<endl;
    Sleep(400);
    cout<<"                                               Pozostale zycie przyjaciela: "<<przyjaciel[1]--*ork[0]<<endl<<endl;
     Sleep(400);
cout<<"                                                Pozostale zycie przyjaciela: "<<elf[1]--*ork[0]<<endl<<endl;
    Sleep(400);
}

if(kostka6==3){

            HANDLE kolor1;
kolor1 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor1, 2 );

cout<<"                                                   Pozostale zycie orkow odebrane przez bohatera!!!: "<<ork[1]--*sbohatera[0]<<endl;
Sleep(400);
cout<<"                                                   Pozostale zycie orkow odebrane przez przyjaciela!!!: "<<ork[0]--*przyjaciel[1]<<endl;
 Sleep(400);
cout<<"                                                   Pozostale zycie orkow odebrane przez Elfa!!!: "<<ork[0]--*elf[1]<<endl;
 Sleep(400);
}

if(ork[1]==0)
{

    cout<<"TWOJA DRUZYNA ZWYCIEZYLA!!!!!"<<endl;;

                HANDLE kolor2;
kolor2 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor2, 7 );//bialy kolor
//animacja();
    break;
    system("pause");


}
if(sbohatera[1]==0)
{
    cout<<"ORKI WAS ZABILY !!!!!!!!"<<endl;
cout<<"                                                         KONIEC GRY !!!!!!!!"<<endl;
Sleep(2000);
system("pause");

system("gameover.exe");
system("taskkill /F /IM game.exe");
system("taskkill /F /IM winamp.exe");//dla starszych systemow
system("taskkill /F /IM wmplayer.exe");//dla starszych systemow
system("taskkill /F /IM Music.UI.exe");//dla windows 10


//system("taskkill /F /IM cb_console_runner.exe");//dla windows 10

    break;
}

}while(true);
  
    break;



}
cout<<"Po wygranej walce wspolnie zdecydowaliscie ze nie ma na co czekac i wyruszyliscie dalej."<<endl;
cout<<Na rozwidleniu drog przebiegajacych obok wsi znalezliscie bogato wyposazony sklep."<<endl;
cout<<Postanowiliscie wejsc do srodka i obejrzec dostepny do kupna orez."<<endl;



cout<<"Witaj w sklepie towarzyszu, dostales jedna z nie wielu okazji w grze na zakupienie czegos u nas ?, Na co sie decydujesz ? "<<endl;
cout<<"Aktualnie posiadasz: "<<sbohatera[5]<<" zlota"<<endl;
cout<<"Co chcialbys u nas zakupic: ?"<<endl;
cout<<"Lecznie- 500 sztuk zlota ? [1]"<<endl;
cout<<"Mocny Miecz+ 20 dmg do statystyki- 5000 sztuk zlota ? [2]"<<endl;
int buys;
cin>>buys;


switch( buys )
{
case 1:

    if(sbohatera[5]==600 || sbohatera[5]>600)
        {
        sbohatera[5]-600;
        sbohatera[1]=0;
        sbohatera[1]=100;
        cout<<"GRATULUJE TWOJE ZYCIE ZOSTALO ZREGENEROWANE"<<endl;
        stats();
    }
    else
        cout<<"Niestety nie mozesz tego zrobic, masz za malo pieniedzy, PRECZ, NIE ZAWRACAJ MI GLOWY !"<<endl;
        stats();

    break;

case 2:
   if(sbohatera[5]==5000 || sbohatera[5]>5000)
        {
        sbohatera[5]-5000;
        sbohatera[0]=0;
        sbohatera[0]=25;
        cout<<"KUPILES SWOJ MIECZ CZUJESZ SIE POTEZNIEJSZY...Dziekujemy!"<<endl;
        stats();
    }
    else
        cout<<"Niestety nie mozesz tego zrobic, masz za malo pieniedzy, PRECZ, NIE ZAWRACAJ MI GLOWY !"<<endl;
        stats();

    break;
}






system("cls");
 fstream plik4("ekran5.txt", ios::in);
string dane4;
if(plik.good()==false)
{
    cout<<"Plik nie istnieje!"<<endl;
    exit(0);
}
for(int x=0; x<40; x++)
  {
 getline(plik4, dane4);
  cout<<dane4<<endl;
  }



do
{

  int kostka6=rand()%6+1;
   int kostka10=rand()%10+1;

if(kostka6==1 ){

        HANDLE kolor;
kolor = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor, 4);

    cout<<"                                               Pozostale zycie bohatera: "<<sbohatera[1]--*smok[0]<<endl<<endl;
    Sleep(400);
    cout<<"                                               Pozostale zycie przyjaciela: "<<przyjaciel[1]--*smok[0]<<endl<<endl;
     Sleep(400);
cout<<"                                                Pozostale zycie przyjaciela: "<<elf[1]--*smok[0]<<endl<<endl;
    Sleep(400);
}

if(kostka6==3){

            HANDLE kolor1;
kolor1 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor1, 2 );

cout<<"                                                   Pozostale zycie orkow odebrane przez bohatera!!!: "<<smok[1]--*sbohatera[0]<<endl;
Sleep(400);
cout<<"                                                   Pozostale zycie orkow odebrane przez przyjaciela!!!: "<<smok[0]--*przyjaciel[1]<<endl;
 Sleep(400);
cout<<"                                                   Pozostale zycie orkow odebrane przez Elfa!!!: "<<smok[0]--*elf[1]<<endl;
 Sleep(400);
}

if(smok[1]==0)
{

    cout<<"TWOJA DRUZYNA ZWYCIEZYLA!!!!!"<<endl;;

                HANDLE kolor2;
kolor2 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor2, 7 );//bialy kolor
//animacja();
    break;
    system("pause");


}
if(sbohatera[1]==0)
{
    cout<<"SMOK WAS ZABIL !!!!!!!!"<<endl;
cout<<"                                                         KONIEC GRY !!!!!!!!"<<endl;
Sleep(2000);
system("pause");

system("gameover.exe");
system("taskkill /F /IM game.exe");
system("taskkill /F /IM winamp.exe");//dla starszych systemow
system("taskkill /F /IM wmplayer.exe");//dla starszych systemow
system("taskkill /F /IM Music.UI.exe");//dla windows 10


//system("taskkill /F /IM cb_console_runner.exe");//dla windows 10

    break;
}

}while(true);


system("pause");


system("cls");
 fstream plik5("ekran6.txt", ios::in);
string dane5;
if(plik.good()==false)
{
    cout<<"Plik nie istnieje!"<<endl;
    exit(0);
}
for(int x=0; x<40; x++)
  {
 getline(plik5, dane5);
  cout<<dane5<<endl;
  }



system("pause");










	Sleep(200);
	enter();
	cout<<"To juz koniec naszej histori, dziekujemy!"<<endl;

system("taskkill /F /IM winamp.exe");//dla starszych systemow
system("taskkill /F /IM wmplayer.exe");//dla starszych systemow
system("taskkill /F /IM Music.UI.exe");//dla windows 10
system("taskkill /F /IM game.exe");
system("cls");
	system("pause");




















return 0;
}
