#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> numeros{ -1,   2, 3,  4, 5, 5, 5,-8, 0, 3,
                        10, 11,12,-89,40,47, 0,-2,-5, 1};

  int positivos = 0, negativos = 0, pares = 0, impares = 0, ceros = 0;


  for (int i = 0; i < 20; i++) {
    cout << "Dame el numero " << (i +1) << endl;
    cin >> numeros[i];
  }
        

  for (int n:numeros) {
    if(n >= 0) {
      positivos++;
    } else {
      negativos++;
    }

    if (n % 2 == 0) {
      pares++;
    } else {
      impares++;
    }
    
    if (n == 0) {
      ceros++;
    }

  }
  cout << "Los resultados son: " << endl;
  cout << "Positivos: " << positivos << endl;
  cout << "Negativos: " << negativos << endl;
  cout << "Pares    : " << pares << endl;
  cout << "Impares  : " << impares << endl;
  cout << "Ceros    : " << ceros << endl;
}