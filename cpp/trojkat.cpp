/*
 * trojkat.cpp
 * napisz program który pobiera od użytkownika trzy liczby,
 * długoiść boków i sprawdz czy da się z niech zrobić trójkąt
 * Copyright 2019 kl2ag1 <kl2ag1@ubu10>
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a;
        cout << "Podja liczbę a: ";
    int b;
        cout << "Podja liczbę b: ";
    int c;
        cout << "Podja liczbę c: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a);{
        cout << "trójkąt <3" << endl;}
    else {cout << "nie trójkąt" ;}

	return 0;
}

