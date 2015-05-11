#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void liczydlo()
{
    cout<<"[1] - dodawanie"<<endl;
    cout<<"[2] - odejmowanie"<<endl;
    cout<<"[0] - wyjscie z programu"<<endl;
}
void dodawanie()
{
    int a,b;
    cout<<"Podaj pierwsza liczbe calkowita która chcesz dodac"<<endl;
    cin>>a;
    while(cin.good()==0)
    {
        cout<<"Wpisana wartosc nie jest liczba calkowita"<<endl;
        cin.clear();
        cin.sync();
    }
    cout<<"Podaj druga liczbe calkowita."<<endl;
    cin>>b;
    while(cin.good()==0)
    {
        cout<<"Wpisana wartosc nie jest liczba calkowita"<<endl;
        cin.clear();
        cin.sync();
    }
    cout<<"Suma podanych liczb wynosi: "<<a+b<<endl;
}
void odejmowanie()
{
    int a,b;
    cout<<"Podaj pierwsza liczbe calkowita która chcesz odjac"<<endl;
    while(!(cin>>a))
    {
        cout<<"Wpisana wartosc nie jest liczba calkowita"<<endl;
        cin.clear();
        cin.sync();
    }
    cout<<"Podaj druga liczbe calkowita."<<endl;
    while(!(cin>>b))
    {
        cout<<"Wpisana wartosc nie jest liczba calkowita"<<endl;
        cin.clear();
        cin.sync();
    }
    cout<<"Roznica podanych liczb wynosi: "<<a-b<<endl;
}
int main()
{
    cout<<"Witam w programie do dodawania i odejmowania liczb calkowitych, LICZYDLO"<<endl<<"Wybierz dzialanie jakie chcesz wykonaæ:"<<endl;
    liczydlo();
    int z;
    do
    {
    cin>>z;
    cin.clear();
    cin.sync();
    switch(z)
        {
    case 1:
        dodawanie();
        break;
    case 2:
        odejmowanie();
        break;
    case 0:
        break;
    default:
        break;
        }
    }while(z!=0);
    return 0;
}
