#include <iostream>
using namespace std;

int main () {
  float a = 1;
  float b = 2;
  float c = 3;

  if ( a > b ) {
      if ( a > c ) {
        cout << "La variable 'a' tiene el mayor valor" << endl;
      }
  }

  if ( b > a ) {
      if ( b > c ) {
        cout << "La variable 'b' tiene el mayor valor" << endl;        
      }
  }

  if ( c > a) {
      if ( c > b ) {
        cout << "La variable 'c' tiene el mayor valor" << endl;
      }
  } 
}