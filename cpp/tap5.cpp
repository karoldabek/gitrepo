/*
 * tab4.cpp
 * ASC
 */


#include <iostream>
#define ROZMIAR 100
using namespace std;

int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
    cout << "Podaj tekst" << endl;
    cin.getline(tekst, ROZMIAR);
    int i;
    
    for (i=65; i >= ROZMIAR; i++) {
        cout << tekst[i];
    }
    
    cout << tekst[i] << endl;
	return 0;
}

