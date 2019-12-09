/*
 * euklides.cpp
 * nie masz tego wię no
 */


#include <iostream>
using namespace std;
    
    
    while (a > 0){
    i++;
    a =  a % b;
    b = b - a;
    }
    cout << "NWD: " << b << endl;
    cout << "Powtórzenń: " << i << endl;
    return b;
}

// NWD(a, b) = b dla a = 0
// NWD(a, b) = (a = a % b; b = b - a)

int NWD rel(int a, int b){
    if (a ! = 0)
        return NWD rel(a % b, b - (a % b));
    else
        return b;
}

// NWD(a, b) = a dla b = 0;
// NWD(a, b) = {a = b, b = a % b}
// NWD(a, b) = NWD(b, a % b)

int NWD re2l(int a, int b){
    if (b ! = 0)
        return NWD rel2(b, a % b);
    else
        return a;
}


int main(int argc, char **argv)
{
	int a, b, i;
    a = b = i = 0;
    cout << "Podaj dwie liczby całkowite: " << endl;
    cin >> a >> b;
    nwd_1(a, b);
    nwd_2(a, b);
    cout << NWD_ret(a, b) << endl;
    cout << NWD_ret2(a, b) << endl;
    
    
	return 0;
}

