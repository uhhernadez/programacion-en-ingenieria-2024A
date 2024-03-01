#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  cout << "123456789" << endl;
  cout << setw(2) << "E" << endl; 
  cout << setw(2) << "Es" << endl; 
  cout << setw(2) << "Esto es un texto" << endl; 

  cout << setw(3) << "E" << endl; 
  cout << setw(3) << "Es" << endl; 
  cout << setw(3) << "Esto es un texto" << endl; 
  
  cout << setw(20) << "E" << endl; 
  cout << setw(20) << "Es" << endl; 
  cout << setw(20) << "Esto es un texto" << endl; 
  
  cout << setw(20) << "E" << setw(20) << "E" << endl; 
  cout << setw(20) << "Es" << setw(20) << "Es" << endl; 
  cout << setw(20) << "Esto es un texto" << setw(20) << "Esto es un texto" << endl; 
}
