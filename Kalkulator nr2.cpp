#include <iostream>
using namespace std;
int menu_wyboru()
{
    cout<<"Wybierz dzialanie:"<<endl;
    cout<<"[1] Dodawanie"<<endl;
    cout<<"[2] Odejmowanie"<<endl;
    cout<<"[3] Mnozenie"<<endl;
    cout<<"[4] Dzielenie"<<endl;
    cout<<"[5] Zmien liczby"<<endl;
    cout<<"[6] Rezygnuj"<<endl;
    int z;
    while(!(cin>>z)||((z!=1)&&(z!=2)&&(z!=3)&&(z!=4)&&(z!=5)&&(z!=6)))
    {
        cin.clear();
        cin.sync();
        cout<<"Blad. Wybierz jedna z dostepnych opcji."<<endl;
    }
    return z;
}
float wczytaj_liczbe()
{
    float x;
    while(!(cin>>x)||x==0)
    {
        cin.clear();
        cin.sync();
        cout<<"Blad. Podaj liczbe rzeczywiste:"<<endl;
    }
    return x;
}
int main()
{
    float liczba1,liczba2;
    int wybrana_opcja;
    cout<<"Podaj liczbe rzeczywista rozna od zera"<<endl;
    liczba1=wczytaj_liczbe();
    cout<<"Podaj druga liczbe rzeczywista rozna od zera"<<endl;
    liczba2=wczytaj_liczbe();
    do
    {
        wybrana_opcja=menu_wyboru();
        switch(wybrana_opcja)
        {
            case 1:
                cout<<endl<<"WYNIK="<<liczba1+liczba2<<endl;
                break;
            case 2:
                cout<<endl<<"WYNIK="<<liczba1-liczba2<<endl;
                break;
            case 3:
                cout<<endl<<"WYNIK="<<liczba1*liczba2<<endl;
                break;
            case 4:
                cout<<endl<<"WYNIK="<<liczba1/liczba2<<endl;
                break;
            case 5:
                cout<<"Podaj liczbe rzeczywista rozna od zera"<<endl;
                liczba1=wczytaj_liczbe();
                cout<<"Podaj druga liczbe rzeczywista rozna od zera"<<endl;
                liczba2=wczytaj_liczbe();
                break;
            case 6:
                break;
        }
    }while(wybrana_opcja!=6);
    return 0;
}
