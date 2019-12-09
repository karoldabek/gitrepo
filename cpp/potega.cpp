/*
 * silnia.cpp
 */


#include <iostream>
using namespace std;

// x^0 = 1 dla x=/0
// x^1 = x     // x do potęgi 1 = 1
// x^n = x * ... * x(n - czynników)

float potega_it(float x, int n) {
    float potega = 1;
    for (int i = 0; i < n; i++) {
        potega = potega * x;
    }
    return potega;
}

// definicja rekurencyjna:
// x^0 = 1 dla x=/0
// x^n = x(n - 1) * x

float potega_re(float x, int n) {
    if (n == 0)
        return 1;
    else
        return potega_re(x, n - 1) * x;
}

//~ potega_re(2, 4);
//~ potega_re(2, 3) * 2;
//~ potega_re(2, 2) * 2;
//~ potega_re(2, 1) * 2;
//~ potega_re(2, 0) = 1;  // w kolejnej części powtużan jest pamiętana ta 1 przez co (2, 1) * 2 = 2, a nie jak wcześnij 
//~ potega_re(2, 1) * 2 = 2;   // w formie zwracanych wyników: 1 * 2 = 2
//~ 2 * 2 = 4


int main(int argc, char **argv)
{
	float x;  //podstawa
    int n;  //wykładnik
    cout << "Podaj podstawę: " << endl;
    cin >> x;
    cout << "Podaj wykłdanik: " << endl;
    cin >> n;
    cout << "Potęga: " << potega_it(x, n) << endl;
    
    cout << "Potęga2: " << potega_re(x, n) << endl;
    
	return 0;
}

