#include <iostream>
#include <vector>
using namespace std;

int LeerValorTerminal(string mensaje) {
  int retval; // Valor de retorno;
  cout << mensaje << endl;
  cin >> retval;
  return retval;
}

vector<int> LeerNumeros() {
  vector<int> retval(10);
  for (int i = 0; i < retval.size(); i++) {
    retval[i] = LeerValorTerminal("Dame un valor : ");
  }
  return retval;
}

void MostrarNumeros(vector<int> nums) {
  for (int n:nums) {
    cout << n << ", " << endl;
  }
}

int suma (int a, int b) {
  return a+b;
}


int main() {
  vector<int> nums = LeerNumeros();
  MostrarNumeros(nums);
  cout << suma(1,2) << endl;
}