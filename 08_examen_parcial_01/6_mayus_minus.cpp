#include <iostream>
using namespace std;

int main () {
  char letra = 'a';
  char diff = 'a'-'A'; // 97 - 65 = 32
  
  if (letra >= 'a' && letra <= 'z') {
    char mayuscula = letra - diff; 
    cout << mayuscula << endl;    
  } else if (letra >= 'A' && letra <= 'Z') {
    char minuscula = letra + diff;
    cout << minuscula << endl;;
  } else {
    cout << "No es una letra" << endl;
  }
}