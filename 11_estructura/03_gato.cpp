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
  if(g.edad <= 12) {
    cout << g.nombre << " miiiiaaaaauuuu ..." << endl;
    g.edad += 0.2;
  } else {
    cout << "No puedo estoy muerto" << endl;
  }
}

void Comer (Gato &g) {
  if(g.edad <= 12) {
    cout << g.nombre << " ñam ñam ñam ..." << endl;
    g.edad += 0.2;
  } else {
    cout << "No puedo estoy muerto"<< endl;
  }
}

void Dormir (Gato &g) {
    if(g.edad <= 12) {
      cout << g.nombre << " ZZzzzZZzzzZZZzzzz ..." << endl;
      g.edad += 0.2;
    } else {
      cout << "No pasa nada" << endl;
    }
}

void Ronronear (Gato &g) {
  if(g.edad <= 12) {
    cout << g.nombre << " rrrrrrrRRRrrrrRRrrr ..." << endl;
    g.edad += 0.2;
  } else {
    cout << "Que no puedo por que estoy muerto ..." << endl;
  }
}

int main () {
  Gato gertrudis;
  Inicializar(gertrudis, "Gertrudis", 11, 8);
  Mostrar(gertrudis);
  Maullar(gertrudis);
  Comer(gertrudis);
  Dormir(gertrudis);
  Ronronear(gertrudis);

  Maullar(gertrudis);
  Comer(gertrudis);
  Dormir(gertrudis);
  Ronronear(gertrudis);

  Maullar(gertrudis);
  Comer(gertrudis);
  Dormir(gertrudis);
  Ronronear(gertrudis);
  
  Gato felpu;
  Inicializar(felpu,"Felpuchina", 4, 10);
  Mostrar(felpu);
}

