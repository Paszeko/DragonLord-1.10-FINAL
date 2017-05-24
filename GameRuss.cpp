//KAMIL BOGUMI£, DragonLord v1 @2017, Wszelkie prawa zastrzezone.
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <ctime>
using namespace std;


int tmp1= 10;
int atak;
int unik;
int zmienna;
string M;
string G;
char X;
string imie;



//string sbohatera[6]={"sila","hp","dex","lvl","exp"};
int sbohatera[6]={5,0,0,1,1000};//{"dmg","hp","dex","lvl","exp"};
int GOSPODARZ[6]={5,10,0,1,1000};//{"dmg","hp","dex","lvl","exp"};

void eq()
{

	cout<<"TBOU UHBEHTAPb : "<<endl;
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
cout<<"CO3DATEJIU : "<<endl<<"Kamil Bogumil"<<endl<<"Dominik Kludkiewicz"<<endl<<"Serhii Fedotov"<<endl<<"ALL RIGHTS RESERVED @2017"<<endl;

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
cout<<"___)8e888*__________,88888be.________888__________ ______________                                TbI MOJEC CAM CO3DATb CBOIY UCTOPUIY  DragonLord'a!, DOCTATO4HO U3MEHUTb FAUJIbI .  "<<endl;
cout<<"__,d888`___________,8888888*_____d888___________ _____________ "<<endl;
cout<<"_,d88P`___________,8888888Pb._____d888`___________ _____________                                     KAMIL BOGUMIL"<<endl;
cout<<"_888*____________,88888888*___.d8888*____________ _____________                                      DOMINIK KLUDKIEWICZ"<<endl;
cout<<"_`88____________,888888888____.d88888b____________ _____________                                     SERHII FEDOTOV"<<endl;
cout<<"__`P___________,8888888888bd888888*_______________ _____________ "<<endl;
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
enter();

cout<<"DO6PO POJAJIOBATb V UGPY DragonLord (v.1.04), IIPUYATHOU UGPbI v TextRPGa!! "<<endl;
cout<<"HOBbIU DragonLord TYT : "<<"https://github.com/Paszeko"<<endl;
Sleep(1000);
}

void stats()
{
cout<<"TBOR CTATUCTUKA: "<<endl<<"XII: "<<sbohatera[1]*10<<endl<<"MAHA: "<<sbohatera[2]*1<<endl<<"TBOU  JIBJI: "<<sbohatera[3]<<endl<<"KOJIU4ECTBO EXP: "<<sbohatera[4]<<endl<<"DMG"<<endl<<sbohatera[0]<<endl;
	if(sbohatera[0]==5)
	{
	cout<<endl<<"DMG: "<<sbohatera[0]<<endl;
	}
}


void menu(){

//MENU
cout<<"BbI6EPU MEHY"<<endl;
cout<<"[1]- GEPOU"<<endl;
cout<<"[2]- UHBEHTAPb"<<endl;
cout<<"[3]- CO3DATEJIU"<<endl;
cout<<"[4]- BbIXOD"<<endl;
cin>>zmienna;

switch(zmienna)
{
case 1:
   cout<<"GEPOU: "<<endl<<imie<<endl;
   stats();
   Sleep(100);
cout<<"BbI6EPU OK: "<<endl;
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
		cout<<"GAD, TbI HE HAPICAJI OK!!!!"<<endl;
		 Sleep(2000);
		 system("cls");
	}
}
break;
    menu();


case 2:
    eq();
    Sleep(100);
cout<<"BbI6EPU OK: "<<endl;
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
		cout<<"GAD, TbI HE HAPICAJI OK!!!!"<<endl;
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
cout<<"BbI6EPU OK: "<<endl;
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
		cout<<"GAD, TbI HE HAPICAJI OK!!!!"<<endl;
		 Sleep(2000);
		 system("cls");
	}
}

    break;
    menu();
case 4:
	Sleep(100);
	cout<<"BbIXOD";
	break;
}
}


void podmenu(){

//MENU
int ekran1m;
	cout<<"BbI6EPU MEHY"<<endl;
cout<<"[1]- GEPOU"<<endl<<"[2]- Menu"<<endl<<"[3]- BbIXOD"<<endl;
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
    cout<<"BbIXOD"<<endl;
    break;
}

}



int main()
{

	system("mode 650");
    system("01.mp3");
	srand(time(NULL));



	czolowka();

	cout<<"BbI6EPU NICK GEPOR "<<endl;
cin>>imie;
Sleep(1000);
cout<<"TBOU NICK: "<<imie<<endl;
cout<<"BbI6EPU CTATUCTUKY "<<imie<<"a"<<endl;
do{

cout<<"KOJIU4ECTBO XII = max punktow 10 (TOJIbKO CbIFPbI!)"<<endl;
cin>>sbohatera[1];

if(sbohatera[1]>10)
{
	cout<<"TAK HEJI3R...max 10"<<endl;
}

}while (sbohatera[1]>10);

do{

cout<<"IIPOBOPCTBO = max 10 (TOJIbKO CbIFPbI!)"<<endl;
cin>>sbohatera[2];

if(sbohatera[2]>10)
{
	cout<<"TAK HEJI3R...max 10"<<endl;
}

}while (sbohatera[2]>10);

system("cls");
cout<<"TBOR FUHAJIbHAR CTATUCTUKA: "<<endl<<"XII: "<<sbohatera[1]*10<<endl<<"MAHA: "<<sbohatera[2]*1<<endl<<"TBOU  JIBJI: "<<sbohatera[3]<<endl<<"KOJIU4ECTBO EXP: "<<sbohatera[4]<<endl<<"DMG"<<endl<<sbohatera[0]<<endl;
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
cout<<"MEHY HADO ? DA LUB HET"<<endl;
cin>>M;
system("cls");
if(M=="DA"|| M=="da" || M=="Da" )
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
	cout<<"HA4AJIO"<<endl;



	Sleep(200);
//Wczytywanie Pliku
fstream plik("ekran1.txt", ios::in);
string dane;
if(plik.good()==false)
{
    cout<<"HET FAUJIA!"<<endl;
    exit(0);
}

  for(int x=0; x<20; x++)
  {
 getline(plik, dane);
  cout<<dane<<endl;
  }



int ekran1mm;
cout<<"JMU MEHY"<<endl;
cout<<"[1]- YBEU"<<endl<<"[2]- MEHY(HECTA6UJIbHO)"<<endl<<"[3]- POKAJU TOBAP.."<<endl;
cin>>ekran1mm;


switch( ekran1mm )
{
case 1:
    Sleep(100);
  cout<<"BAJIU HAXPEH !"<<endl;

//sbohatera[6]={5,0,0,1,1000};//{"dmg","hp","dex","lvl","exp"};
//BOT[6]={5,10,0,1,1000};//{"dmg","hp","dex","lvl","exp"};

cout<<"HA4AJIO DPAKU !!!!!!!!"<<endl;
do
{

  int kostka6=rand()%6+1;
   int kostka10=rand()%10+1;

if(kostka6==1 ){

        HANDLE kolor;
kolor = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor, 4);

    cout<<"                                                XII XO3RUHA"<<sbohatera[0]--*GOSPODARZ[1]<<endl<<endl;
    Sleep(400);
}

if(kostka6==3){

            HANDLE kolor1;
kolor1 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor1, 2 );
cout<<"                                                   TBOE XII!!!"<<GOSPODARZ[0]--*sbohatera[1]<<endl;
 Sleep(400);
}

if(sbohatera[0]==0)
{

    cout<<"TbI IIO6EDUJI !!!"<<endl;;

                HANDLE kolor2;
kolor2 = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor2, 7 );//bialy kolor
    break;
    system("pause");


}
if(GOSPODARZ[0]==0)
{
    cout<<"TbI IIPOUGPAJI !!!!!!!!"<<endl;
cout<<"                                                        KOHEC UGPbI !!!!!!!!"<<endl;
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
    cout<<"U MEHR HU4EGO HET DJIA TEBR .."<<endl;

      break;

}
system("cls");







































 fstream plik1("ekran2RUSS.txt", ios::in);
string dane1;
if(plik.good()==false)
{
    cout<<"HET FAUJIA!"<<endl;
    exit(0);
}
for(int x=0; x<20; x++)
  {
 getline(plik1, dane1);
  cout<<dane1<<endl;
  }



system("pause");


system("cls");
 fstream plik2("ekran3RUSS.txt", ios::in);
string dane2;
if(plik.good()==false)
{
    cout<<"HET FAUJIA!"<<endl;
    exit(0);
}
for(int x=0; x<10; x++)
  {
 getline(plik2, dane2);
  cout<<dane2<<endl;
  }



system("pause");


system("cls");
 fstream plik3("ekran4RUSS.txt", ios::in);
string dane3;
if(plik.good()==false)
{
    cout<<"HET FAUJIA!"<<endl;
    exit(0);
}
for(int x=0; x<20; x++)
  {
 getline(plik3, dane3);
  cout<<dane3<<endl;
  }



system("pause");


system("cls");
 fstream plik4("ekran5RUSS.txt", ios::in);
string dane4;
if(plik.good()==false)
{
    cout<<"HET FAUJIA!"<<endl;
    exit(0);
}
for(int x=0; x<20; x++)
  {
 getline(plik4, dane4);
  cout<<dane4<<endl;
  }



system("pause");






system("cls");
 fstream plik5("ekran6RUSS.txt", ios::in);
string dane5;
if(plik.good()==false)
{
    cout<<"HET FAUJIA!"<<endl;
    exit(0);
}
for(int x=0; x<20; x++)
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








