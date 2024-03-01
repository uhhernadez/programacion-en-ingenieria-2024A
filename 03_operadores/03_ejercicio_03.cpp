#include <iostream>
using namespace std;

int main () {
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10; // enteros o flotantes?
  cout << "Numero 1: ";
  cin >> n1;
  cout << "Numero 2: ";
  cin >> n2; 
  cout << "Numero 3: ";
  cin >> n3; 
  cout << "Numero 4: ";
  cin >> n4; 
  cout << "Numero 5: ";
  cin >> n5; 
  cout << "Numero 6: ";
  cin >> n6; 
  cout << "Numero 7: ";
  cin >> n7; 
  cout << "Numero 8: ";
  cin >> n8; 
  cout << "Numero 9: ";
  cin >> n9; 
  cout << "Numero 10: ";
  cin >> n10;
  int suma = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
  float promedio = suma / 10.0f;
  cout << "Promedio es: " << promedio << endl;
  cout << "La suma es: " << suma << endl;
  
  cout << "Promedio es: " << (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10.0f << endl;
  cout << "La suma es: " << (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) << endl;
}
