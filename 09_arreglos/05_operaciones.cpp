#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<float> calificaciones{0.0, 0.5, 1.0, 3.5, 10.0, 7.5, 5.5, 8.0, 2.0, 9.0};
  cout << "Numero de elementos: "<<calificaciones.size() << endl;
  float suma = 0.0;

  suma = calificaciones[0] + calificaciones[1] + calificaciones[2] +calificaciones[3]
        +calificaciones[4] + calificaciones[5] + calificaciones[6] +calificaciones[7]
        +calificaciones[8] + calificaciones[9];
  cout << "La suma es: " << suma << "\n";
  cout << "El promedio: " << suma / calificaciones.size() << endl;
  
  suma = 0.0;
  for (float c:calificaciones) {
    suma = suma + c;
  }
  cout << "La suma: " << suma << endl;

  int cont = 0;
  for (float c:calificaciones) {
    if (c < 7) {
      cont++;
    }
  }
  cout << "El numero de reprobados " << cont << endl;
}