#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    float a, b, c;
    cout << "Podaj a: " <<endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;
    cout << "Podaj c: " << endl;
    cin >> c;
    if(a==b==c){
        cout << "Podane liczby są równe" << endl;}
    else{
        cout << "Podane liczby nie są równe" << endl;}
        if(a<b && a<c){
            cout << a << "  " << "liczba a jest najmniejsza" << endl;}
            if(a>b && a>c){
                cout << a << "  " << "liczba a jest największa" << endl;}
        if(b<a && b<c){
            cout << b << "  " << "liczba b jest najmniejsza" << endl;}
            if(b>a && b>c){
                cout << b << "  " << "liczba b jest njawiększa" << endl;}
        if(c<a && c<b){
            cout << c << "  " << "liczba c jest njamniejsza" << endl;}
            if(c>a && c>b){
                cout << c << "  " << "liczba c jest njawiększa" << endl;}
    return 0;
}
