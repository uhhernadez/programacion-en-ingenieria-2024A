
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    float num;
    cout<< "De el valor de 'x': ";
    cin>> num;
    
    float calculo = (3 * (num * num)) - (2 * (num)) + 9;
    cout << "y = " << calculo << endl;
}