/*
 * tab1.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int rozmiar = 5;
    int tablica[rozmiar];
    int i = 0;
    
    int tablica2[rozmiar];
    
    int j = 0;
    cout << "Podaj 10 liczb: " << endl;
    
    for (i=0; i<rozmiar; i++){
        cin >> tablica[i];
        }
    for (i=0; i<rozmiar; i++){
        cout << tablica[i] << " ";
        }
    
    for (j=0; j<rozmiar; j++){
        cin >> tablica2[j];
        }
    for (j=0; j<rozmiar; j++){
        cout << tablica2[j] << " ";
        }
    
    if (tablica[i] > tablica2[j]) {
        cout << "tablica pierwsza jest większa." << endl;
    }
    
    if (tablica[i] < tablica2[j]) {
        cout << "tablica druga jest większa." << endl;
    }
    
	return 0;
}

