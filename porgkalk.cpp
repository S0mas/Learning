#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int losuj()
{
    int x = rand()%(15)+4;
    return x;
}
int sumuj(int tablica[])
{
    int x = 0;
    int suma = 0;
    do
    {
    suma=suma + tablica[x];
    ++x;
    }while(x<1000);
    return suma;

}
int main()
{
    int x;
    x = 0 ;
    int tablica[1000];
    srand(time(NULL));
    cout<<"WITAJ W SUMIE LOSOWEJ TABLICY O 1000 ELEMENTOW!"<<endl<<"ZACZNIEMY OD PRZYPISANIA ELEMENTOM TABLICY LOSOWYCH WARTOSCI!";
    do
    {
        tablica[x] = losuj();
        cout<<tablica[x]<<" , ";
        ++x;
    }while(x<1000);
    cout<<endl<<"A OTO SUMA WSZYSTKICH WARTOSCI ELEMENTOW TABLICY";
    cout<<endl<<sumuj(tablica);
return 0;
}
