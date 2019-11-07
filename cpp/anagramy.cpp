/*
 * anagramy.cpp
 * fynkaja break też działa jak continue ale troche innaczej i w tym przypadku by nie zadziałała
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    //~ n! = 1 * ... * n    są to silnie obliczaj ile by było tych anagramów 
    //~ n! = (n-1)! * n
    //~ 4! = 1 * 2 * 3 * 4 = 24
    //~ 5! = 4! * 5
    int r = 4;  //rozmiar
	char napis[]="krab";
    int i1, i2, i3, i4;
    i2 = 1; i3 = 2; i4 = 3;
    
    for(i1 = 0; i1 < r; i1++){
        for (i2 = 0; i2 < r; i2++){
            if (i2 == i1) continue;  // continue - przerwij wykonywanie pętli w tym momęcie i przeydz do kolejnej coś tam no po protu to pomiń i idz dalej.
            for (i3 = 0; i3 < r; i3++){
                if (i3 == i2 || i3 == i1) continue;  // jeżeli i3 będie miało wartość i2 to będzie continue. || - lub
                    for (i4 = 0; i4 < r; i4++){
                        if (i4 == i3 || i4 == i2 || i4 == i1) continue;
                cout << napis[i1] << napis[i2] << napis[i3] << napis[i4]  << endl;
                    }
            }
        }
    }
    
	return 0;
}

