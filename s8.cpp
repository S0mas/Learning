#include <iostream>
#include <string>
using namespace std;
bool szukaj( string & tekst, string wyraz1, string wyraz2 )
{
    if (tekst.find(wyraz1)!=string::npos && tekst.find(wyraz2)!=string::npos) return true;
    else return false;
}

void wypiszWynik( bool czyZnaleziono )
{
    if( czyZnaleziono )
         cout << "Znaleziono" << endl;
    else
         cout << "Nie znaleziono" << endl;

}

int main()
{
    string napis = "Zadanie domowe z taki kursu C++ (http://cpp0x.pl) - najlepszy kurs C++ w Internecie!";
    wypiszWynik( szukaj( napis, "ada", "kurs" ) );
    wypiszWynik( szukaj( napis, "ada", "taki" ) );
    wypiszWynik( szukaj( napis, "C++", "cpp0x" ) );
    wypiszWynik( szukaj( napis, "C#", "cpp0x" ) );
   string sNapis = "To jest napis";
   cout << "Napis: " << sNapis << endl;
   cout << "Dlugosc napisu to (metoda size): " << sNapis.size() << endl;
   cout << "Dlugosc napisu to (metoda length): " << sNapis.length() << endl;
    return 0;
}
