#include <iostream>
using namespace std;
enum Meses {
  Enero = 1,
  Febrero,
  Marzo,
  Abril,
  Mayo, 
  Junio,
  Julio,
  Agosto,
  Septiembre,
  Octubre,
  Noviembre,
  Diciembre
};

int main () {
  int mes = 1;
  switch (mes) {
    case Enero: cout << "Enero" << endl;
    case Febrero: cout << "Febrero" << endl;
    case Marzo: cout << "Marzo" << endl;
    case Abril: cout << "Abril" << endl;
    case Mayo: cout << "Mayo" << endl;
    case Junio: cout << "Junio" << endl;
    case Julio: cout << "Julio" << endl;
    case Agosto: cout << "Agosto" << endl;
    case Septiembre: cout << "Septiembre" << endl;
    case Octubre: cout << "Octubre" << endl;
    case Noviembre: cout << "Noviembre" << endl;
    case Diciembre: cout << "Diciembre" << endl;
    default: cout << "No es ningun mes" << endl;
  }

  if (mes == 1) { cout << "Enero" << endl;}
  if (mes == 2) { cout << "Febrero" << endl;}
  //string meses[] = {};
}