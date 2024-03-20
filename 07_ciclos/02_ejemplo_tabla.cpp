#include <iostream>
using namespace std;

int main () {
  int num = 0;

  cout << "Que tabla de multiplicar quieres calcular" << endl;
  cin >> num;
  /*
  cout << num << " x 1  = " << num * 1 << endl;
  cout << num << " x 2  = " << num * 2 << endl;
  cout << num << " x 3  = " << num * 3 << endl;
  cout << num << " x 4  = " << num * 4 << endl;
  cout << num << " x 5  = " << num * 5 << endl;
  cout << num << " x 6  = " << num * 6 << endl;
  cout << num << " x 7  = " << num * 7 << endl;
  cout << num << " x 8  = " << num * 8 << endl;
  cout << num << " x 9  = " << num * 9 << endl;
  cout << num << " x 10 = " << num * 10 << endl;
  */

  for (int n = 1; n <= 100; n++ ) {
    cout << num << " x " << n << " = " 
         << num * n << endl;
  } 
}