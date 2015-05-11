#include <iostream>
#include <string>
using namespace std;

string konwertuj(string & sTekst )
{
    string sWynik;
    sWynik = sTekst.erase(0 ,1);
    sWynik = sTekst.erase(1 ,1);
    sWynik = sTekst.erase(9 ,1);
    sWynik = sTekst.erase(11 ,1);
    sWynik = sTekst.erase(19 ,7);
    sWynik = sTekst.erase(25 ,5);
    sWynik = sTekst.insert(0 ,"[");
    sWynik = sTekst.insert(2 ,"]");
    sWynik = sTekst.insert(11 ,"[");
    sWynik = sTekst.insert(14 ,"]");
    return sWynik;
}
int main()
{
    std::string tekst = "<b>to jest </b> testowy        napis     :)";
    std::cout << konwertuj( tekst ) << std::endl;
    return 0;
}

