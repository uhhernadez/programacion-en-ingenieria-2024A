#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main () {
  float calificaciones[] = { 0.1, 7.5, 10.0, 9.0 };
  cout << "Primer parcial: " << calificaciones[0] << endl;
  float alturas[4] = {1.50, 1.80, 1.60, 1.67};
  cout << "Estatura " << alturas[2] << endl;
  vector<int> vec{1, 2, 3, 4};
  cout << "Segundo elemento " << vec[1] << endl;

  for (int i = 0; i < vec.size() ; i++) {
    cout << "Indice " << i << " contenido " << vec[i] << endl;
  }

  for (int i : vec) {
    cout << i << endl;
  }

  for (float a : calificaciones) {
    cout << a << endl;
  }

  for (auto a : calificaciones) {
    cout << a << endl;
  }
}