#include <iostream>
#include <cmath>

using namespace std;

int main () {
    float num;
    cout<< "Numero: ";
    cin>> num;
    //float cuadrado = (num * num);
    //float cubo = (num * num * num);
    float cuadrado = pow(num, 2);
    float cubo = pow(num, 3);
    float raiz = pow(num, 0.5);
    cout << "Cuadrado: " << cuadrado << endl;
    cout << "Cubo: " << cubo << endl;
}
