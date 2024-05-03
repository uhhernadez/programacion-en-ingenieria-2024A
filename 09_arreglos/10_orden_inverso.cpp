#include <iostream>
#include <vector>
using namespace std;

int main () {
  //int entrada[10];
  vector<int> entrada(10);

  for (int k = 0; k < 10; k++) {
    cout << "Introduce el valor " << (k+1) << ": ";
    cin >> entrada[k]; // entrada[0], entada[1]
  }

  cout << entrada[9] << endl;
  cout << entrada[8] << endl;
  cout << entrada[7] << endl;
  cout << entrada[6] << endl;
  cout << entrada[5] << endl;
  cout << entrada[4] << endl;
  cout << entrada[3] << endl;
  cout << entrada[2] << endl;
  cout << entrada[1] << endl;
  cout << entrada[0] << endl;
  for (int i = 9; i >=0; i--) {
    cout << entrada[i] << endl;
  }
}
