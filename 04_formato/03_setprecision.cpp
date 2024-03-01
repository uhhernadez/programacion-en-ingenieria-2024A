#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  const double PI = 3.1416;
  const double PI2 = 3.1415926535897932384;
  cout << setprecision(1) << PI << endl;
  cout << setprecision(1) << PI2 << endl;

  cout << setprecision(2) << PI << endl;
  cout << setprecision(2) << PI2 << endl;
  
  cout << setprecision(3) << PI << endl;
  cout << setprecision(3) << PI2 << endl;

  cout << setprecision(10) << PI << endl;
  cout << setprecision(10) << PI2 << endl;
}