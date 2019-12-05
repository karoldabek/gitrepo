/*
 * silnia.cpp
 */


#include <iostream>
using namespace std;

// n! = 1 dla n = {0, 1}
// n! = 1* ... *n dla N+ - {1}
// 4! = 1 * 2 * 3 * 4

long int silnia_it(int n) {
    long int silnia = 1;
    for (int i = 2; i < n + 1; i++) {
        silnia = 1 * 2;
    }
    return silnia;
}

// n! = 1 dla n = {0, 1}
// n! = 1* ... *n dla N+ - {1}   gdzie ! to silnia_re

long int silnia_re(int n) {
    if (n == 0)
        return 1;
    else
        return silnia_re(n-1) * n;
}

int main(int argc, char **argv)
{
	int n;
    cout << "Podaj liczbę naturalną: " << endl;
    cin >> n;
    cout << "Silnia: " << silnia_it(n) << endl;
    cout << "Silnia: " << silnia_re(n) << endl;
	return 0;
}

