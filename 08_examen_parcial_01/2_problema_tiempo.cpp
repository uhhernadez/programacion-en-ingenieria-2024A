#include <iostream>
using namespace std;

int main () {
  // Escriba un programa que sume dos cantidades dadas en segundos (entre 0 -
  // 60) y de el resultado en minutos
  int seg1, seg2;
  cout << "Cantidad 1: ";
  cin >> seg1;
  cout << "Cantidad 2: ";
  cin >> seg2;

  int segundos = (seg1 + seg2) % 60; // Resto de la división 
  int minutos = (seg1 + seg2) / 60; // División de enteros

  cout << "Total: " << minutos << ":" << segundos << endl;
  cout << "Total: " << minutos << ":" << ((segundos< 10)?"0":"")<<segundos << endl;
}
