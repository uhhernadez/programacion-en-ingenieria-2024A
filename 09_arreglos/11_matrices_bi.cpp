#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<vector<int> > m;
  // Inicialización
  float matriz[3][3] = {{1, 2, 4}, 
                        {2, 5, 6},
                        {7, 8, 9}};
  // Mostrar
  cout << matriz[0][0] << ", " << matriz[0][1] << ", " << matriz[0][2] << endl;
  cout << matriz[1][0] << ", " << matriz[1][1] << ", " << matriz[1][2] << endl;
  cout << matriz[2][0] << ", " << matriz[2][1] << ", " << matriz[2][2] << endl;
  // matriz[898][1598]
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matriz[i][j] << ", ";
    }
    cout << endl;
  }


}