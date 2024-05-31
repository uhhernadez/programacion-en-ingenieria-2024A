#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

struct Dado {
  int caras;
  
  // Método del mismo nombre que la estructura 
  // Constructor - configura a la estructura
  Dado(int n) {
    caras = n;
  }

  // Método, función que pertenece a la estructura.
  int Tirada() {
    return rand() % caras + 1;
  }
};

int main () {
  srand(time(NULL)); // Semilla seed para iniciar los números
  Dado d6(6), d10(10), d20(20);

  cout << "Dado de 6: "  << d6.Tirada() << endl;
  cout << "Dado de 10: " << d10.Tirada() << endl;
  cout << "Dado de 20: " << d20.Tirada() << endl;

  cout << "Tu personaje quiere buscar pistas en una habitación, " << endl;
  cout << "tiene una habilidad de Localizar de 45%" << endl;
  int tirada = d10.Tirada() + d10.Tirada()*10;

  if(tirada < 45) {
    cout << "Hay un sobre, entre los libros del estante izquierdo" << endl;
  } else {
    cout << "No has visto ninguna pista" << endl;
  }

}