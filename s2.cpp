#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int x,y;
    bool d;
    do
    {
    cout<<"Wybierz zakres z jakiego chcesz losowac liczby"<<endl;
    cout<<"Poczatek zakresu:";
    cin>>x;
    d = cin.good();
    cin.clear();
    cin.sync();
    }while(d==0);
    do
    {
    cout<<"Koniec zakresu:";
    cin>>y;
    d = cin.good();
    cin.clear();
    cin.sync();
    }while(d==0);
    return 0;

}
