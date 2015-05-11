#include <iostream>
using namespace std;
int main()
{
    float x,y;
    int z;
    do
    {
      cout<<"Podaj liczbe rzeczywista rozna od zera"<<endl;
      cin>>x;
      cin.clear();
      cin.sync();
    }while(x==0);
    do
    {
      cout<<"Podaj druga liczbe rzeczywista rozna od zera"<<endl;
      cin>>y;
      cin.clear();
      cin.sync();
    }while(y==0);
    do
    {
    cout<<"Wybierz dzialanie:"<<endl;
    cout<<"[1] Dodawanie"<<endl;
    cout<<"[2] Odejmowanie"<<endl;
    cout<<"[3] Mnozenie"<<endl;
    cout<<"[4] Dzielenie"<<endl;
    cout<<"[5] Zmien liczby"<<endl;
    cout<<"[6] Rezygnuj"<<endl;
    cin>>z;
switch(z)
{
case 1:
    cout<<endl<<"WYNIK="<<x+y<<endl;
    break;
case 2:
    cout<<endl<<"WYNIK="<<x-y<<endl;
    break;
case 3:
    cout<<endl<<"WYNIK="<<x*y<<endl;
    break;
case 4:
    cout<<endl<<"WYNIK="<<x/y<<endl;
    break;
case 5:
        do
    {
      cout<<"Podaj liczbe rzeczywista rozna od zera"<<endl;
      cin>>x;
      cin.clear();
      cin.sync();
    }while(x==0);
    do
    {
      cout<<"Podaj druga liczbe rzeczywista rozna od zera"<<endl;
      cin>>y;
      cin.clear();
      cin.sync();
    }while(y==0);
    break;
case 6:
    break;
default:
        cout<<endl<<"Wybierz jedna z opcji"<<endl;
        cin.clear();
        cin.sync();
        break;
}
    }while((z==1)||(z==2)||(z==3)||(z==4)||(z==5)||(z!=6));
    return 0;


}
