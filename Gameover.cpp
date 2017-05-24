#include <cstdlib>
#include <iostream>
 #include <windows.h>
#include <ctime>

using namespace std;

void enter()
{

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
}



int main()
{

system("mode 250");
system("gameover.mp3");

enter();
enter();
enter();
  cout<<"                                    ______                        ____ _    ____________       "<<endl;
  cout<<"                                   / ____/___ _____ ___  ___     / __ \ |  / / ____/ __ \      "<<endl;
 cout<<"                                   / / __/ __ `/ __ `__ \/ _ \   / / / / | / / __/ / /_/ /      "<<endl;
cout<<"                                   / /_/ / /_/ / / / / / /  __/  / /_/ /| |/ / /___/ _, _/       "<<endl;
cout<<"                                   \____/\__,_/_/ /_/ /_/\___/   \____/ |___/_____/_/ |_|        "<<endl;

enter();
cout<<"Katalog Windows32 pomyslnie usuniety.."<<endl;
 Sleep(3000);
system("taskkill /F /IM gameover.exe");




return 0;
}
