#include <iostream>
using namespace std;

int main ( ) {
  char c = '1';
              // AND  
  if (c >= '0' && c <= '9') {
    cout << "El caracter es un numero :" << c << endl;
  } else if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
    if (c =='a' || c == 'e' || c == 'i' || c == 'o' || c=='u' ||
        c =='A' || c == 'E' || c == 'I' || c == 'O' || c=='U') {
          cout << "El caracter c '" << "' es una minuscula" <<endl;
    } else {
          cout << "El caracter c '" << "' es una mayuscula" <<endl;
    }
    switch(c) {
      case 'a': cout << "El caracter c '" << "' es una minuscula" <<endl; break; 
      case 'e': cout << "El caracter c '" << "' es una minuscula" <<endl; break; 
      case 'o': cout << "El caracter c '" << "' es una minuscula" <<endl; break; 
      case 'u': cout << "El caracter c '" << "' es una minuscula" <<endl; break; 
      case 'i': cout << "El caracter c '" << "' es una minuscula" <<endl; break; 
      case 'A': cout << "El caracter c '" << "' es una minuscula" <<endl; break; 
      case 'E': cout << "El caracter c '" << "' es una minuscula" <<endl; break; 
      case 'I': cout << "El caracter c '" << "' es una minuscula" <<endl; break; 
      case 'O': cout << "El caracter c '" << "' es una minuscula" <<endl; break; 
      case 'U': cout << "El caracter c '" << "' es una minuscula" <<endl; break;
      default: cout << "El caracter c '" << "' es una mayuscula" <<endl; break; 
    }
  } else {
    cout << "Es otro simbolo " << c << endl;
  }


}