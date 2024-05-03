#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> numeros(10);
  
  for (int i = 0; i < 10; i++) {
    cout << "Dame el numero " << (i +1) << endl;
    cin >> numeros[i];
  }

  int num;
  cout << "Que numero quiere buscar " << endl;
  cin >> num;

  /*for (int n : numeros) {
    if (n == num) {
      cout << "El numero " << num <<" existe " << endl;
      break;
    }
  }*/
  int index = -1;  
  for (int i = 0 ; i < 10 ; i++) {
    if (num == numeros[i]) {
      index = i;
      break;
    }
  }

  if (index == -1) {
    cout << "El numero no existe en el arreglo" << endl;
  } else {
    cout  << "El numero '" << num 
          << "' se encuentra en la posicion " << index << endl;
  }

}