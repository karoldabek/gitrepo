/*
 *  * BOMBELKI!!!!!!!!!!!!!!
 * 
 * metodologia malejąca:
 * 4 5 8 3 15 6
 * 5 8 4 15 6 3
 * 8 5 15 6 4 3
 * 8 15 6 5 4 3
 * 15 8 6 5 4 3  //to może się skończyć ale algorytm może o tym nie wiedzieć wię pisze to jeszcze raz
 * 15 8 6 5 4 3  // algorytm zakłada każdą możliwość dlatego 2 tazy 
 */


#include <iostream>
using namespace std;

void wypelnij(int tab[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        tab[i] = rand() % n;
        }
    }

void wyswietl(int tab[], int n){
    for (int i = 0; i < n; i++){
        cout << tab[i] << " ";
        }
        cout << endl;
    }

void copytab(int tab[], int tab2[], int n) {
    for (int i = 0; i < n; i++){
        tab2[i] = tab[i];
        }
    }

//~ void insert(int tab[], int n) {
    //~ int i, k, el;
    //~ for(i = 1; i < n; i++) {
        //~ el = tab[i];
        //~ k = i - 1;
        //~ while (k >= 0 && tab[k] < el) {
            //~ tab[k + 1] = tab[k];
            //~ k--;
            //~ }
            //~ tab[k+1] = el;
        //~ }
    //~ }

void zamien(int &a, int &b) {  // & daje nam bezpośredni dostęp do komurek pamięci
    int tmp = a;
    a = b;
    b = tmp;
    }

//sortowanie przez wybór
void selection_sort(int tab[], int n) {
    int ile = 0;
    int i, j, k;
    for(i = 0; i < n; i++) {
        k = i;
        for (j = i + 1; j < n; j++) {
            if (tab[j] < tab[k])
                k = j;
            }
            zamien(tab[k], tab[i]);
            ile++;
        }
        cout << "Zamian: " << ile << endl;
    }

// 5, 3, 8, 5, 1, 0, 9   // algorytm sukal iczby większej od pierwszej ( wtym przpadku 5) znajduje ją i zamienia miejscamy
// 0, 3, 8, 5, 1, 5, 9
// 0, 1, 8, 5, 3, 5, 9
// 0, 1, 3, 5, 8, 5, 9
// 0, 1, 3, 5, 8, 5, 9
// 0, 1, 3, 5, 5, 8, 9

//sortowanie bombelkowe
void bubble_sort(int tab[], int n) {
    int ile = 0;
    for (int i = n - 1; i > 0; i--) {
        cout << "Indeks i= " << i << endl;
        for (int j = 0; j < i; j++) {
            cout << "Indeks j= " << j << " ";
            if (tab[j] < tab[j+1]) {
                zamien(tab[j], tab[j+1]);
                ile++;
                }
            }
            cout << endl;
        }
        cout << "Zamian: " << ile << endl;
    }

int main(int argc, char **argv)
{
	int tab[50];
    int tab2[50];
    int n;
    
    cout << "Ile elementów ma zawierać tablica (max = 50)? ";
    cin >> n;
    wypelnij(tab, n);
    copytab(tab, tab2, n);
    wyswietl(tab2, n);
    selection_sort(tab, n);
    bubble_sort(tab2, n);
    wyswietl(tab, n);
    
	return 0;
}

;
