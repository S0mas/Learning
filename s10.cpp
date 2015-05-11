#include <iostream>
using namespace std;
int load_numbers(int table[], int amount)
{
    int liczba;
    for(int x = 0; x<=amount; x++)
    {
        cout<<"Podaj liczbe calkowita na pozycje: "<<x<<endl;
        cin>>liczba;
        if (cin.good() == 0)
        {
        cout<<"Blad. Wczytywanie liczb przerwane na pozycji: "<<x<<endl;//. Pamietaj podawaj liczby calkowite"<<endl;
        break;
        }
        cin.clear();
        cin.sync();
        table[x] = liczba;
        cout<<"Liczba poprawnie zapisana na pozycji: "<<x<<endl;

    }
}
void show_numbers(int table[], int amount)
{
    for(int x = 0; x<=amount; x++) cout<<"Liczba na pozycji: "<<x<<" to "<<table[x]<<endl;
}
int main()
{
    int table[10];
    load_numbers(table, 10);
    show_numbers(table, 10);
    return 0;
}
