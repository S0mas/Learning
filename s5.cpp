#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int select_number()
{
    int x;
    while(!(cin>>x))
    {
        cin.clear(); cin.sync();
        cout<<"Blad. Podaj liczbe calkowita."<<endl;
    }
    return x;
}

int random_number(int start, int stop)
{
    if(start<stop) return rand()%(stop-start+1)+start;
    else return rand()%(start-stop+1)+stop;
}

bool check_number(int table[], int x)
{
    int i = 0;
    if (x == 0) return false;
    do
    {
    if (table[i]==table[x]) return true;
    else ++i;
    }while(i<x);
    return false;
}

void find_numbers(int table3[])
{
    int x = 0;// int wylosowana; int start; int stop;
    /*do
    {
        cout<<"Podaj poczatek zakresu..:"<<endl;
        start = select_number();
        cout<<"Podaj koniec zakresu..:"<<endl;
        stop = select_number();
        if(stop-start<10) cout<<"Blad. Zakres musi byc wiekszy niz 10 liczb."<<endl;
    }while(stop-start<10);*/
    while(x<3)
    {
       // wylosowana = random_number(start, stop);
       cout<<"Wybierz liczbe";
        table3[x] = select_number();//wylosowana;
        if (check_number(table3, x)==false) ++x;
        else cout<<"Liczba sie powtarza";
    }
}
void show_numbers(int table3[], int table2[])
{
   // int z;
    int x = 0;
    cout<<"Wybierz ilosc losowanych liczb z podanego zakresu(nie wiecej niz 11):"<<endl;
   // while((z = select_number())>11)
   // {
   //     cout<<"Blad. Wybierz nie wiecej niz 11 elementow."<<endl;
   // }
    while(x<3)
    {
        table2[x]=random_number(0, 2);
        if (check_number(table2, x)==false) ++x;
    }
    cout<<table3[0]<<", ";
    cout<<table3[1]<<", ";
    cout<<table3[2]<<", ";
    cout<<table2[0]<<", ";
    cout<<table2[1]<<", ";
    cout<<table2[2]<<", ";
}

int main()
{

    srand(time(NULL));
    int table2[2];
    int table3[2];
    cout<<"WITAM W LOSOWARCE BEZ POWTORZEN"<<endl;
    find_numbers(table3);
    show_numbers(table3, table2);
    cout<<endl<<"Koniec!";
    table3[2]=1000;
    cout<<table3[2];
    return 0;
}
