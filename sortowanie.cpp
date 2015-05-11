#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int random_number( int start, int stop )
{
    int x;
    if( start < stop ) return x = rand() % ( stop - start + 1) + start ;
    else return x = rand() % ( start - stop + 1 ) + stop ;
}
void load_numbers( int table[], int amount )
{
    int start ; int stop ;
    cout<<"Podaj poczatek zakresu z ktorego beda losowane liczby:"<<endl;
    while( ! ( cin>>start ) )
    {
        cout<<"Blad. Poczatek zakresu musi byc liczba calkowita."<<endl;
        cin.clear();
        cin.sync();
    }
    cout<<"Podaj koniec zakresu z ktorego beda losowane liczby:"<<endl;
    while( ! ( cin>>stop ) )
    {
        cout<<"Blad. Koniec zakresu musi byc liczba calkowita."<<endl;
        cin.clear();
        cin.sync();
    }
    for ( int x = 0 ; x <= amount ; x++) table[x] = random_number( start, stop );
}
void show_numbers( int table[], int amount )
{
    cout<<endl<<"Lista wylosowanych liczb:"<<endl;
    for( int x = 0 ; x <= amount ; x++ ) cout<<table[x]<<", ";
}
void sort_numbers(int table[], int amount)
{
    for( int x = 0 ; x <= amount ; x++ )
    {
        int z = table[x] ;
        for( int y = 0 ; y <= amount ; y++ )
        {
        if ( z <= table[y] ) continue;
        z = table[y] ;
        table[y] = table[x] ;
        table[x] = z ;
        --x;
        break;
        }
    }
}
void sort_numbers_2(int table[], int amount)
{
    for( int x = 0 ; x <= amount ; x++ )
    {
        int z = table[x] ;
        for( int y = 0 ; y <= amount ; y++ )
        {
        if ( z >= table[y] ) continue;
        z = table[y] ;
        table[y] = table[x] ;
        table[x] = z ;
        --x;
        break;
        }
    }
}
int main()
{
    srand(time(NULL));
    int table[20];
    int table1[20];
    load_numbers(table, 20);
    show_numbers(table, 20);
    sort_numbers(table, 20);
    show_numbers(table, 20);
    sort_numbers_2(table, 20);
    show_numbers(table, 20);
    return 0;
}
