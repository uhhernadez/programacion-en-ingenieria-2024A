#include <iostream>
using namespace std;

int main () {
  int N = 8;
  // Anidamiento
  for (int m = 0; m < N; m++) {
    for (int n = 0; n < N; n++) {
      cout <<"*";  
    }
    cout << endl;
  }
}