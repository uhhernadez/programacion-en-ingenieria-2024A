#include <iostream>
using namespace std;

int main () {
  float nota;

  cout << "Dame el porcentaje" << endl;
  cin >> nota;

  if (nota >= 90 && nota <= 100) {
    cout << "A" << endl;
  } else if ( nota >= 80 && nota < 90) {
    cout << "B" << endl;
  } else if ( nota >= 70 && nota < 80) {
    cout << "C" << endl;
  } else if ( nota >= 60 && nota < 70) {
    cout << "D" << endl;
  } else {
    cout << "F" << endl;
  }

  if (nota >= 90 && nota <= 100) {
    cout << "A" << endl;
  }
  if ( nota >= 80 && nota < 90) {
    cout << "B" << endl;
  }
  if ( nota >= 70 && nota < 80) {
    cout << "C" << endl;
  }
  if ( nota >= 60 && nota < 70) {
    cout << "D" << endl;
  } 
  if ( nota < 60) {
    cout << "F" << endl;
  }

}