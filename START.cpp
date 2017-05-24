#include <cstdlib>
#include <iostream>
 #include <windows.h>
#include <ctime>

using namespace std;


int main()
{
cout<<"Wybierz wersje jezykowa DragonLord'a."<<endl;
cout<<"[1]- Wersja PL."<<endl;
cout<<"[2]- Wersja RUS."<<endl;



 cout<<"  _____                                _                   _  "<<endl;
 cout<<" |  __ \                              | |                 | | "<<endl;
 cout<<" | |  | |_ __ __ _  __ _  ___  _ __   | |     ___  _ __ __| | "<<endl;
 cout<<" | |  | | '__/ _` |/ _` |/ _ \| '_ \  | |    / _ \| '__/ _` | "<<endl;
 cout<<" | |__| | | | (_| | (_| | (_) | | | | | |___| (_) | | | (_| | "<<endl;
 cout<<" |_____/|_|  \__,_|\__, |\___/|_| |_| |______\___/|_|  \__,_| "<<endl;
cout<<"                  __/ |                                        "<<endl;
cout<<"                  |___/                                        "<<endl;












int zmienna;
cin>>zmienna;
switch( zmienna )
{
case 1:
    system("game.exe");
    break;

case 2:
    system("GameRuss.exe");
    break;

}


return 0;
}
