#include <iostream>
using namespace std;

int main () {
  if (true) {
    cout << "Cuando la condicion se cumple (true)" << endl;
  } else {
    cout << "Cuando la condicion no se cumple" << endl;
  }
      // 1 AND 1 = 1
  // >
  // <     
  // ==
  // !=
  // <=
  // >=
  // !
  if ( 1 != 3 ) {
    cout << "Cuando la condicion se cumple (true)" << endl;
  } else {
    cout << "Cuando la condicion no se cumple" << endl;
  }
  bool x = false, y;
  if ( ! (x && y) ) {
    cout << "Operación de negacion " << endl;
  }
}