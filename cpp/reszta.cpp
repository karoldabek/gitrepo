/*
 * reszta.cpp
 * wydawanie rewssty
 * bankomat
 *
 * nominał: 
 * R = 69;
69 % 50 = 1
1) R:=60 - 50 * (69 % 50) = 19
2) R:= 19 - 10 * (19 % 10) = 9
* 
 */


#include <iostream>
using namespace std;

int nominaly[100];
int liczbaNominalow;

void wczytajNominaly() {
    cout << "Podaj liczbę nominałów: ";
    cin >> liczbaNominalow;
    
    cout << "Podaj nominały w kolejności malejacje: " << endl;
    int i=0;
    int nominal = 0;
    cin >> nominal;
    niminaly[i] = niminal;
    i++;
    while (i < liczbaNominalow){
        cin >> nominal;
        if (niminal > nominaly[i-1]){
            cout << "Nominał większy od poprzedniego!!" << endl;
            continue;
        }
        nominaly[i] = niminal;
        i++;
    }
    //~ for(int i = 0; i < liczbaNominalow; i++){
        //~ cin >> nominaly[i];
        //~ }
    //~ for(int i = 0; i < liczbaNominalow; i++){
        //~ cout << nominaly[i] << " ";
        //~ }
    //~ cout << endl;
    }

int znajdzReszte(int reszta){
    cout << "Wplacone nominały: " << endl;
    int aktualnyNominal = 0;
    
    while (warunek > 0 && aktualnyNominal < liczbaNominalow){
        cout << "reszta = " << reszta << endl;
        //znajdz największy dostepny nominal mniejszy od reszty;
        cout << "aktualny nominał: " << nominaly[aktualnyNominal] << endl;
        //oblicz wymaganych ilośc nominałów
        //pomnijsz reszte
        }
    
    }

int main(int argc, char **argv)
{
	wczytajNominaly();
    int cena;
    int wplaaca;
    cout << "Podaj cenę: ";
    cin >> cena;
    
    do { //pętla blokującja
        cout << "Podaj wplatę: ";
        cin >> wplata;
    } while(wplata < cena);
    
    znajdzReste(wplata - cena);
    
	return 0;
}

