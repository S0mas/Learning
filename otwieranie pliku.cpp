#include <iostream>
#include <fstream>
#include <string>

bool wyswietlZawartoscPliku( std::string sNazwaPliku, std::string napis )
{
    std::ifstream plik;
    plik.open( "C:/Poker/cpp0x.txt" );
    if( !plik.good() )
         return false;
    napis = "eg";
    std::string wiersz;
    for(bool odczyt = std::getline( plik ,wiersz ); odczyt  == true ; odczyt = std::getline( plik , wiersz ) )
        {
            if( wiersz.find( napis ) == std::string::npos ) continue ;
            std::cout << wiersz << std::endl;
        }

    plik.close();
    return true;
}

int main()
{
    if( !wyswietlZawartoscPliku( "C:/Poker/cpp0x.txt", "eg" ) )
         std::cout << "Nie udalo sie otworzyc pliku o podanej nazwie." << std::endl;

    return 0;
}
