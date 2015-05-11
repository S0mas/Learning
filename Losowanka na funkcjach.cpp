#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int wczytaj_liczbe()
{
    int x;
    while(!(cin>>x))
    {
        cin.clear();
        cin.sync();
        cout<<"Blad. Podaj liczbe calkowita."<<endl;
    }
    return x;
}
int main()
{
    srand(time(NULL));
    int wynik;
    cout<<"WITAM W LOSOWARCE"<<endl;
    cout<<"Losujemy od.."<<endl;
    int poczatek_zakresu = wczytaj_liczbe();
    cout<<"..do.."<<endl;
    int koniec_zakresu = wczytaj_liczbe();
    cout<<"Losujemy od "<<poczatek_zakresu<<" do "<<koniec_zakresu<<"."<<endl;
    cout<<"Ile wynikow chcesz zobaczyc?"<<endl;
    int liczba_wynikow = wczytaj_liczbe();
            do
    {
        if(koniec_zakresu>poczatek_zakresu)
            wynik=rand()%(koniec_zakresu-poczatek_zakresu+1)+poczatek_zakresu;
        else
            wynik=rand()%(poczatek_zakresu-koniec_zakresu+1)+koniec_zakresu;
    liczba_wynikow=--liczba_wynikow;
    cout<<wynik<<endl;
    }while(liczba_wynikow>0);
    return 0;
}
