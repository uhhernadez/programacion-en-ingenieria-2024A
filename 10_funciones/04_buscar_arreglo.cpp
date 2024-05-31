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


bool BuscarNumero(vector<int> nums, int numero) {
  int index = -1;  
  for (int i = 0 ; i < 10 ; i++) {
    if (numero == nums[i]) {
      index = i;
      break;
    }
  }
  return index != -1;
}

int main () {
  vector<int> numeros = LeerNumeros();
  int num = LeerValorTerminal("Dame el numero a buscar: ");

  if(BuscarNumero(numeros,num)) {
    cout << "Si existe el valor" << endl;
  } else {
    cout << "No existe el valor" << endl;
  }
}