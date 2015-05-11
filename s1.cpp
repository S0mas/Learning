#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    cout<<"Losowanie pierwsze.. "<<rand()<<endl;
    int liczba = rand();
    cout<<"Losowanie drugie.. "<<liczba<<endl;
    liczba = rand();
    cout<<"Losowanie trzecie.. "<<liczba<<endl;
    cout<<"KONIEC!";
    return 0;


}
