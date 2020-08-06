#include <iostream>
#include<time.h>
#include<windows.h>//bo uzyjemy funkcji sleep

using namespace std;
int liczba;

int main()
{
    cout << "Rozpoczynamy losowanie za 3 sekundy!" << endl;
    Sleep(3000);

    srand(time(NULL));

    for(int n=1; n<=6; n++)
    {

    liczba=rand()%49+1;//wkladamy do zmiennej liczba wylosowana liczbe
    Sleep(2000);
    cout<<liczba<<"\a"<<endl; // "\a" to daje nam dzwiek alarmu

    }


    return 0;
}
