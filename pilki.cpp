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
for( int x = 0 ; x <= 2 ; x++ ) cout<<table[x]<<", ";
suma = suma + table[0] + table[1] + table[2];
cout<< " Suma: "<<suma;
y++;
cout<<endl;
}
/*int random2(int x1, int x2, int start, int stop)
{
    int x ;
    do
        x = random_number( start, stop )
    while( x == x1 || x == x2 );
    return x ;
}*/
void load_numbers( int table[])
{
    int y = 1 ; int suma = 0; int start = 1; int stop = 5;
    for(int x1 = 1 ; x1 < 3 ; x1++ )
    {
        table[0] = x1;
        for(int x2 = x1 + 1 ; x2 < 5 ; x2++ )
        {
            if ( x2 == x1 ) x2 = x1 + 1;
            if ( x2 == 5 ) continue ;
            table[1] = x2 ;
            for(int x3 = x2 + 1 ; x3 < 5 ; x3++ )
            {
                if ( x3 == 5 ) continue ;
                table[2] = x3;
                show_table(table, y, suma);
            }
        }
    }
}
                /*for(int x4 = 1 ; x4 < 4 ; x4++ )
                {
                    table[3] = x4;
                    for( int x5 = 1 ; x5 < 4 ; x5++ )
                    {
                        table[4] = x5;
                        show_table(table, y, suma);
                    }
                }
            }
        }
    }
}*/
int main()
{
    int table[2];
    load_numbers(table);
    return 0;
}
