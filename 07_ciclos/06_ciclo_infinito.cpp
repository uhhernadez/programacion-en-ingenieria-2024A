#include <iostream>
using namespace std;

int main () {
  char letra;
  for (;;) {
    cout << "Esto es infinito "<< endl;
    cout << "Escribe la letra s, para salir" << endl;
    cin >> letra;
    if (letra == 's') {
      break;
    } 
  }
}