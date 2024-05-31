#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Gato {
  string nombre;
  float peso;
  float edad;
};


void MostrarGato (string nombre, float peso, float edad) {
  cout << "Nombre: " << nombre << " Peso: " << peso << " Edad: " << edad << endl;
}

int main () {
  string nombre1 = "Mia", nombre2 = "Pumpkin", nombre3="Candy";
  string nombres[] = {"Mia", "Pumpkin", "Candy"};
  float  peso1 = 1.0,     peso2 = 1.0,         peso3 = 3.0;
  float pesos[] = {1.0, 1.0, 3.0};
  float  edad1 = 1,       edad2 = 1,           edad3 = 3.5;
  float edades[] = {1, 1, 3.5};
  MostrarGato(nombre1, peso2, edad3);
  MostrarGato(nombre2, peso1, edad2);
  MostrarGato(nombre3, peso3, edad1);
  for (int k=0; k < 3; k++) {
      MostrarGato(nombres[k], pesos[k], edades[k]);
  }

  Gato gertrudis;
  Gato felpu;

}