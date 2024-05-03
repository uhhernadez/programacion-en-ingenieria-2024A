#include <iostream>
#include <vector>
using namespace std;

int main () {       //0, 1,  2,  3, 4, 5
  vector<int> arreglo{2, 3, 15, 15, 3, 2};

  if (arreglo[0] == arreglo[5]) {
    if (arreglo[1] == arreglo[4]) {
      if (arreglo[2] == arreglo[3]) {
        cout << "Cumple con la condicion" << endl;  
      }
    }
  }
  int N = arreglo.size();
  bool cumple = false;
  for (int n = 0; n < N/2; n++) {
    if (arreglo[n] == arreglo[N - 1 - n]) {
        cumple = true;
    } else {
      cumple = false;
      break;
    }
  }
  if (cumple) {
    cout << "Cumple con la condicion" << endl;
  } else {
    cout << "No cumple con la condicion" << endl;
  }

}