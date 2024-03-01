#include <iostream>
using namespace std;

int main () {
  int respuesta; // respuesta
  cout << "Tienes un problema? 1 - Si, 0 No" << endl;
  cin >> respuesta;
  if (respuesta == 1) {
    cout << "Tiene solucion?" << endl;
    cin >> respuesta;  
    if (respuesta == 1) {
      cout << "Solucionalo" << endl;
      cout << "Resuelve..." << endl;
      cout << "Se soluciono?" << endl;
      cin >> respuesta;
      if (respuesta == 1) {
        cout << "Si resolvio" << endl;
      } else {
        cout << "No te preocupes" << endl;
      }
    } else {
      cout << "No te preocupes" << endl;
    }   
  } else {
    cout << "No te preocupes" << endl;
  }

}