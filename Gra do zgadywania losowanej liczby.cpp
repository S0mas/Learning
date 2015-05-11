#include <iostream>//BRAK OBSŁUGIBŁĘDÓW
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int z = 0;
    unsigned int y,x = rand()%100+1;
    cout<<"Wylosowalem liczbe naturalna od 1 do 1000. Zgaduj!"<<endl;
    do
    {
        while(!(cin>>y))
        {
        cout<<"Wiesz co to jest liczba naturalna...?"<<endl;
        cin.clear();
        cin.sync();
        }
    if(y==x)cout<<"GRATULACJE ZGADLES WYLOSOWANA LICZBA TO WLASNIE "<<x<<"!"<<endl<<"LICZBA PODEJSC:"<<z<<endl<<"KONIEC!";
    if(y<x) {
            cout<<"ZA MALO!"<<endl;
            z=++z;
            }
    if(y>x) {
            cout<<"ZA DUZO!"<<endl;
            z=++z;
            }
    }while(y!=x);
    return 0;
}
