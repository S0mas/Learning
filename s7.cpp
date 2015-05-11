#include <iostream>
#include <string>
using namespace std;
bool change_name(int &imie, int &nazwisko)
{
    cout<<"Podaj imie:"<<endl;
        cin.clear();
        cin.sync();
        cin>>imie;
        if (cin.good() == 0) return false;
    cout<<"Podaj nazwisko:"<<endl;
        cin.clear();
        cin.sync();
        cin>>nazwisko;
        return cin.good();
}
int main()
{
    int x; int y;
    x = 10; y = 20;
    cout<<x<<" "<<y<<endl;
    while(change_name(x, y)==false);
    cout<<x<<" "<<y<<endl;
    string tablica[ 10 ];
    tablica[ 0 ].c_str();
    return 0;

}
