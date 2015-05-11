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
    srand(time(NULL));
    cout<<"WITAM W LOSOWARCE"<<endl<<"Losujemy od.."<<endl;
    int start = wczytaj_liczbe();
    cout<<"..do.."<<endl;
    int stop = wczytaj_liczbe();
    cout<<"Losujemy od "<<start<<" do "<<stop<<"."<<endl<<"Ile wynikow chcesz zobaczyc?"<<endl;
    int liczba_wynikow = wczytaj_liczbe();
    cout<<"No to lecimy!"<<endl;
    do
    {
    liczba_wynikow--;
    cout<<wylosuj(start, stop)<<endl;
    }while(liczba_wynikow>0);
    return 0;
}
