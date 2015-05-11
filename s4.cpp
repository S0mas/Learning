#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int wczytaj_liczbe()
{
    int x;
    while(!(cin>>x))
    {
        cin.clear(); cin.sync();
        cout<<"Blad. Podaj liczbe calkowita."<<endl;
    }
    return x;
}
int wylosuj(int start, int stop)
{
    int x;
    if(start<stop) x = rand()%(stop-start+1)+start;
    else x = rand()%(start-stop+1)+stop;
    return x;
}
int main()
{
    srand( time( NULL ) );
    int start = wczytaj_liczbe();
    int stop = wczytaj_liczbe();
    int ile = wczytaj_liczbe();
    do
    {
        cout << wylosuj( start, stop ) << endl;
        ile--;
    } while( ile > 0 );

    return 0;
}
