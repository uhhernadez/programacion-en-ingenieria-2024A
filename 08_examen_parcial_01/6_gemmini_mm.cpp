#include <iostream>
using namespace std;

int main() {
  char letra;
  cout << "Introduzca una letra: ";
  cin >> letra;
  // Convertir a minúscula
  if (isupper(letra)) {
    letra = tolower(letra);
    cout << "La letra en minúscula es: " << letra << endl;
  }
  // Convertir a mayúscula
  else if (islower(letra)) {
    letra = toupper(letra);
    cout << "La letra en mayúscula es: " << letra << endl;
  }
  // No es una letra
  else {
    cout << "El caracter introducido no es una letra del abecedario." << endl;
  }
  return 0;
}