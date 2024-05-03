#include <iostream>
using namespace std;

int main () {
 // Mostrar los números del 1 al 100 en un renglón
 // Mostrar los números del 1 al 100 en una columna
 // Realizar la suma de los números del 1 al 100
 // Realizar promedio de los números del 1 al 100
  for (int k = 1; k <= 100; k++) {
    cout << k  << " ";
  }
  cout << endl;
  float suma = 0;
  for (int k = 1; k <= 100; k++) {
    cout << k << endl;
    suma = suma + k;
  }
  cout << "La suma de los valores es: " << suma<< endl;
  cout << "El promedio es: " << suma / 100.0f << endl;
}