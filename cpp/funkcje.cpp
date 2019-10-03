/*
 * funkcje.cpp
 */


#include <iostream>

using namespace std;

void sumuj(int a, int b) {
    cout << "Suma: " << a+b << endl;
}

int main(int argc, char **argv)
{
    int a, b;
    cout << "Podaj liczby: " << endl;
    cin >> a >> b;
    sumuj(a, b);
    sumuj(b, a);
	return 0;
}

