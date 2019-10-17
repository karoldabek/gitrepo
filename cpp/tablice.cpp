/*
 * tablice.cpp
 * zadanie 2 z http://ecg.vot.pl/cpp-funkcje
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    //tablica() - funkcja
    //tablica[] - tablica
    //int tablica[19];  //nazwa tanlicy ona wskazuje tylko pierwszą komurkę w naszum przypadku to 0, a jeśli chec coś z niej przeczytac inteksy!!
    int rozmiar = 5;
    int tablica[rozmiar];
    //tablica[0] = 300; //zapisujemy jaka liczba w kturej komurce w tym przpadku komurka 0 zapiwsz w niej 300
    //tablica[5] = 123;  // w komurce 5 apisz liczbę 123
    int i = 0;  //zawsze gdy są tablice są pętle bo nikomu się inaczej nie chce się bawić
    cout << "Podaj 20 liczb: " << endl;
    for (i=0; i<rozmiar; i++){
        cin >> tablica[i];  //zapisywanie danych
        }
    for (i=0; i<rozmiar; i++){  //drukuje zawartość 
        cout << tablica[i] << " ";
        }
        
    for (i=rozmiar-1; i>-1; i--){
        cout << tablica[i] << " ";
        }
    
	return 0;
}

