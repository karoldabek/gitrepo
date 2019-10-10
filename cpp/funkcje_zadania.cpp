/*
 * funkcje_zadania.cpp
 * zadanie 1 z http://ecg.vot.pl/cpp-funkcje
 */


#include <iostream>

using namespace std;

void drukuj(int staz, int zarobek) {
    if(staz==1)
        cout << "Pracujesz? Powątpiewam" << staz << "ale skoro pracujesz to ile lat i ile zarabiasz" << zarobek << endl;
}

void awans(int  lata){
    int a;
    for( a = 1; a <= lata; a++)
}

int main(int argc, char **argv)
{
    int staz = 1;
    int zarobek = 1000;
    int lata = 0;
    cout << "przewidywany okres pracy w latach?" << endl;
    cin >> lata;
	return 0;
}

