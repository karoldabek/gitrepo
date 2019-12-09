/*
 * horner.cppp
 * schemat hornera
 */


#include <iostream>
using namespace std;

void drukujw(int n, float tbwsp[]){
    // a0*n^2 + a1*x + a2
    // 5x^2 + 4x + 3
    int i = 0;
    for (int i = 0; i < n + 1; i++) {
        cout << tbwsp[i] << "x" << n - 1 << "+" ;
        }
        cout << tbwsp[i] << endl;
}

float horner_it(int n, float tbwsp[], float x){
    int i;
    float wynik = tbwsp[0];
    for (i = 1; i < n + 1; i++){
        wynik = wynik * x + tbwsp[i];
        }
        return wynik
}

// W(x) = 2x^3 + 3x^2 + 5x + 4
// W(x) = (2x^2 + 3x + 5)x + 4
// W(x) = ((2x + 3) x + 5)x + 4


float horner_re(int n, float tbwsp[], float x){
    if (n == 0)
        return tbwsp[0];
    else
        return horner_re(n-1, tbwsp, x) * x + tbwsp[n];
}

int main(int argc, char **argv)
{
	int n = 0; // stopień wielomianów
    float *tbwsp;  // tbwsp - tablica stopnia pierwszego (tablica współczynników), każda tablica zawira adres pierwszej komórki czyli jest wskaźnikiem
    float x; // argument
    cout << "Podaj stopień: "; cin >> n;
    tbwsp = new float [n+1];
    cout << "podaj argument: "; cin >> x;
    
    for (int i = 0; i < n + 1; i++){
        cout << "Współczynnik przy potędze " << n - i << ": ";
        cin >> tbwsp[i];
}
    
    cout << "Wartość wielomianu o postaci: ";
    drukujw(n, tbwsp);
    cout << horner_it(n, tbwsp, x) << endl;
    cout << horner_re(n, tbwsp, x) << endl;
    
	return 0;
}

