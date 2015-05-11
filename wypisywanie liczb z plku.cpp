#include <fstream>
#include <string>
#include <iostream>
void load_numbers_file(std::ifstream & file)
{
int number;
file>>number;
std::cout<<number;
}
void load_file(std::string name)
{
std::ifstream file;
file.open( name );
load_numbers_file(file);
}
int main()
{

open_file("C/Poker/cpp0x.txt");

return 0;
}
