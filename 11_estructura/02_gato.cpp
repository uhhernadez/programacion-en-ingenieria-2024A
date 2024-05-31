#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Gato {
  string nombre;
  float edad;
  float peso;
};

void Inicializar (Gato &g, string nombre, float edad, float peso) {
  g.nombre = nombre;
  g.edad = edad;
  g.peso = peso;
}

void Mostrar(Gato &g) {
  cout  << "Nombre: " << g.nombre 
        << " Edad: " << g.edad 
        << " Peso: " << g.peso 
        << endl;
}

void Maullar (Gato &g) {
  cout << g.nombre << " miiiiaaaaauuuu ..." << endl;
}

void Comer (Gato &g) {
  cout << g.nombre << " ñam ñam ñam ..." << endl;
}

void Dormir (Gato &g) {
  cout << g.nombre << " ZZzzzZZzzzZZZzzzz ..." << endl;
}

void Ronronear (Gato &g) {
  cout << g.nombre << " rrrrrrrRRRrrrrRRrrr ..." << endl;
}

int main () {
  Gato gertrudis;
  Inicializar(gertrudis, "Gertrudis", 11, 8);
  Mostrar(gertrudis);
  Maullar(gertrudis);
  Comer(gertrudis);
  Dormir(gertrudis);
  Ronronear(gertrudis);
  Gato felpu;
  Inicializar(felpu,"Felpuchina", 4, 10);
  Mostrar(felpu);
}

