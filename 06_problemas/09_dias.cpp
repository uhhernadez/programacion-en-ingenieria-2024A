#include <iostream>
using namespace std;

int main () {
  unsigned int dia;

  cout << "Dime un numero entre 1 y 7 "<< endl;
  cin >> dia;

  switch (dia) {
    case 1: cout << "Es lunes" << endl; break;
    case 2: cout << "Es martes" << endl; break;
    case 3: cout << "Es miercoles" << endl; break;
    case 4: cout << "Es jueves" << endl; break;
    case 5: cout << "Es viernes" << endl; break;
    case 6: cout << "Es sabado" << endl; break;
    case 7: cout << "Es domingo" << endl; break;
    default : cout << "No estoy seguro que hayas entendido las instrucciones " << dia << endl;
  }

}