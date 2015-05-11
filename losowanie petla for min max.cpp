#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void find_numbers(int table1[], int index, int start, int stop)
{
    for(int x = 0; x<=index; ++x)
    {
        int random_n = rand()%(stop-start+1)+start;
        table1[x] = random_n;
    }
}
void show_numbers(int table1[], int index)
{
    for(int x = 0; x <= index; ++x) cout<<table1[x]<<endl;
}
void show_numbers_backwards(int table1[], int index)
{
    for(int x = index; x >= 0; --x) cout<<table1[x]<<endl;
}
void find_max_min(int table1[], int index)
{
    int y = 0;
    for(int x = 0; x <= index; ++x) if (table1[y]<table1[x]) y=x;
    cout<<"Max: "<<table1[y]<<endl;
    y = 0;
    for(int x = 0; x <= index; ++x) if (table1[y]>table1[x])y=x;
    cout<<"Min: "<<table1[y]<<endl;
}
int main()
{
int table1[9];
srand(time(NULL));
find_numbers(table1, 9, 10, 30);
show_numbers(table1, 9);
show_numbers_backwards(table1, 9);
find_max_min(table1, 9);
return 0;
}
