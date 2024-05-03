#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> numeros(10);

  cout << "Dame el primer numero" << endl;
  cin >> numeros[0];

  for (int i = 0; i < 10; i++) {
    cout << "Dame el numero " << (i +1) << endl;
    cin >> numeros[i];
  }

  for (int i = 0; i < 10; i++) {
    cout << numeros[i] << endl;
  }
}