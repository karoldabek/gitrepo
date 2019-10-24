/*
 * tablica2w.cpp
 */

#include <iostream>
using namespace std;

#define N   10  //stałe ozaczamy dużymi literami np. N, M
#define M   10

int main(int argc, char **argv)
{
	int tab2w[N][M];
    int i, j;
    
    //generator liczb psełko losowych (jest to pewin algorytm zakres od 0 do 1) :
    srand(time(NULL));               // (time(NULL)) - początek epoki juniksa(jest przectawiona jaki 32-bitowa liczba sekund, która upłynęła od 1 stycznie 1970 roku)
                                     // inicjacja generatora psełdo losowych
    for (i=0; i<N; i++){
        cout << "========= Tablica " << i << " =========" << endl;
        for (j=0; j<M; j++){
            cout << 1 << " " << j << endl;
            tab2w[i][j] = rand() % 101;
            cout << tab2w[i][j] << endl;
        }
    }
    
    
	return 0;
}

