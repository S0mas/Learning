#include <iostream>
#include <string>
using namespace std;
void load_words( string table1[], int amount)
{
    string slowo;
    cout<<"Podaj "<<amount<<" slow:"<<endl;
    for(int x = 0; x<amount; x++)
    {
        while(!(cin>>slowo))
        {
            cin.clear();
            cin.sync();
            cout<<"Blad. Wpisz jakies slowo"<<endl;
        }
        table1[x] = slowo;
    }
}

void show_words( string table1[], int amount)
{
    cout<<"Podane slowa: "<<endl;
    for(int x = 0; x<amount; x++) cout<<table1[x]<<endl;
}
int main()
{
    string table1[10];
    load_words(table1, 10);
    show_words(table1, 10);
    return 0 ;
}
