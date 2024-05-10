#include <iostream>
#include <string>
using namespace std;

void MostrarMensaje () {
  cout << "Esta funcion no tiene valor de retorno" << endl;
  return ; // No es necesario --- 
}

int LeerValorTerminal(string mensaje) {
  int retval; // Valor de retorno;
  cout << mensaje << endl;
  cin >> retval;
  return retval;
}

int main () {
  int num, edad, altura ;
  /*
  cout << "Dame un numero: "<< endl;
  cin >> num;

  cout << "Dame tu edad: " << endl;
  cin >> edad;

  cout << "Dame tu altura " << endl;
  cin >> altura;
  */
  num = LeerValorTerminal("Dame un numero: ");
  edad = LeerValorTerminal("Dame una edad: ");
  altura = LeerValorTerminal("Dame una altura: ");
  cout << "Numero: " << num << " Edad: "<< edad << " Altura: " <<altura << endl;
  MostrarMensaje();
}