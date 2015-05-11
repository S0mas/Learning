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
void show_table(int table[], int &y, int &suma )
{
cout<<y<<". "<<"Lista: ";
for( int x = 0 ; x <= 5 ; x++ ) cout<<table[x]<<", ";
suma = suma + table[0] + table[1] + table[2] + table[3] + table[4] + table[5];
cout<< " Suma: "<<suma;
y++;
cout<<endl;
}
void load_numbers( int table[])
{
    int y = 1 ; int suma = 0; int start = 1; int stop = 5;
    for(int x1 = 1 ; x1 < 45 ; x1++ )
    {
        table[0] = x1;
        for(int x2 = x1 + 1 ; x2 < 46 ; x2++ )
        {
            table[1] = x2 ;
            for(int x3 = x2 + 1 ; x3 < 47 ; x3++ )
            {
                table[2] = x3;
                for(int x4 = x3 + 1 ; x4 < 48 ; x4++ )
                {
                    table[3] = x4;
                    for(int x5 = x4 + 1 ; x5 < 49 ; x5++ )
                    {
                        table[4] = x5;
                        for(int x6 = x5 + 1 ; x6 < 50 ; x6++ )
                        {
                            table[5] = x6;
                            show_table(table, y, suma);
                        }
                    }
                }
            }
        }

    }
}
int main()
{
    int table[5];
    load_numbers(table);
    return 0;
}//Program wypisuje wszystkie możliwe skreślenia totolotka, zlicza je oraz ich sume.
