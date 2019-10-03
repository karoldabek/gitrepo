/*
 * podziel.cpp
 */


#include <iostream>

using namespace std;

void sumuj(int a, int b) {
    if (b != 0)
        cout << "wynik: " << (float)a/(float)b << endl;
    else
        cout << "błąd " << endl;
}

int pomnoz(int a, int b){
    return a-b;
}

int main(int argc, char **argv)
{
    int a, b;
    cout << "Podaj liczby: " << endl;
    cin >> a >> b;
//    sumuj(a, b);
//    sumuj(b, a);
    cout << "różnica: " << pomnoz(a, b) << endl;
//    int wynik;
//    wynik = pomnoz(a, b);
//    cout << "Iloczyn: " << wynik;
	return 0;
}

