/*
 * fibonacciego.cpp
 */


#include <iostream>
using namespace std;

int fibonacci_it(int n) {  // n ciąg jakiś zanków
    int a = 0;        //może też byc a = 1 i wtedy te dwie jedynki od razu się sumóją       Fn - 1   liczb aprzed ostatnia         jednak 1 nie 0 bo tak fajniej i prościej
    int b = 1;        // b = 1         Fn - 2  liczba przed przed ostatnia
    int wynik = 0;
    if (n == 0) return 0;
    if (n == 1) return 1;
    for (int i = 2; i < n; i++) {
        wynik = a + b;  // przykład  : 1//2//3 
        b = a;  //1//1//2
        a = wynik;  //1//2//3
    }
    return wynik;
}

// f(n) = 1 dla n{0, 1}
// f(n) = f(n-1) + f(n-2) dla n >1
int fibonacci_re(int n){
    if (n < 2)
        return 1;
    else
        return fibonacci_re(n-1) + fibonacci_re(n+2);
}

int main(int argc, char **argv)
{
    cout << fibonacci_it(0) << endl;
    cout << fibonacci_it(1) << endl;
    
    //~ for (int i=2; i < 20; i++) {
        //~ cout << i << ": fib(" << fibonacci_it (i-2)
             //~ << ", " << fibonacci_it (i-1) << ") = "
             //~ << fibonacci_it (i) << "\t" 
             //~ << (float)fibonacci_it(i) / (float)fibonacci_it(i-1)
             //~ << endl;
         //~ }
     
     int n;
     cin >> n;
     cout << fibonacci_re(n) << endl;
     
	return 0;
}

