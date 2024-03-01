#include <iostream>
using namespace std;

int main () {
    float num;
    cout << "Grados Fahrenheit: ";
    cin >> num;
    float calculo = (num - 32 ) / 1.8;
    cout << "Grados centigrados: " << calculo << endl;
}