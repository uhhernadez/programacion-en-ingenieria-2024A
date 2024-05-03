#include <iostream>
using namespace std;

int main () {
  int vector[8];

  cout << "Sin inicializar "  << vector[0] << endl;
  vector[0] = 2;
  vector[1] = 2;
  vector[2] = 2;
  vector[3] = 2;
  vector[4] = 2;
  vector[5] = 2;
  vector[6] = 2;
  vector[7] = 2;
  vector[0] = vector[1] = vector[2] = 3;
  cout << "Inicializado "  << vector[0] << endl;
  cout << "Fuera de los limites "  << vector[137] << endl;
  cout << "Indice fraccionario "  << vector[3.7] << endl;
}