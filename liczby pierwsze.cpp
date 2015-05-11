#include <iostream>
using namespace std;
void first( int start )
{ int z = 1;
    for( unsigned long long x = start ; x>0 ; x = x + 2 )
    {
        for( unsigned long long y = 3 ; y < x ; y = y + 2 )
        {
            if ( x % y == 0 ) break ;
            if ( x == y + 2 )
            {
                cout<<"! "<<z<<" . !"<<x<<", ";
                ++z;
            }
        }
    }
}
int main()
{
    int a ;
    first(20000000000);
    return 0 ;
}
