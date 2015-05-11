#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
 srand(time(NULL));
 int x,y;
 int d = 2;
 cout<<"Wybierz zakres z jakiego chcesz losowac liczby"<<endl;
  while(d==2)
  {
    cout<<"Poczatek zakresu:";
    while(!(cin>>x))
    {
    cout<<"Blad. Podaj poczatek zakresu:"<<endl;
    cin.clear();
    cin.sync();
    }
    cout<<"Koniec zakresu:";
    while(!(cin>>y))
    {
    cout<<"Blad. Podaj koniec zakresu:"<<endl;
    cin.clear();
    cin.sync();
    }
    cout<<"Wybrany zakres: od "<<x<<" do "<<y<<"."<<endl;
    do
    {
    cout<<"Wylosowana liczba to ";
    if(x<y)
        cout<<rand()%(y-x+1)+x<<"."<<endl;
    else
        cout<<rand()%(x-y+1)+y<<"."<<endl;
    cout<<"Jezeli chcesz wylosowac kolejna wartosc nacisnij 1"<<endl;
    cout<<"Jezeli chcesz zmienic zakres nacisnij 2"<<endl;
    cin>>d;
    }while(d==1);
  }
    return 0;
}
