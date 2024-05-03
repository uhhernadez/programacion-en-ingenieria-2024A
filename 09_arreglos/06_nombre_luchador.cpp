#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {
  vector<string> nombres {"Bestia", "Dragon", "Pulpo", "Angel", "Perro",
                          "Gato","Aguila","Relampago","Small","Joven",
                          "Guerrero", "Serpiente","Muerte","Marsupial",
                          "Cangrejo","Ave","Caballo","Heroe","Tigre",
                          "Diablo","Dios","Mascara","Rey","Spider","Cienpies", 
                          "Cassandro"};

  string  apellido;

  cout << "Dame tu apellido " << endl;
  cin >> apellido;
  char inicial = toupper(apellido[0]);
  cout << apellido[0] << " toUpper " << inicial << endl;
  switch(inicial) {
    case 'A': cout << nombres[0] << endl; break;
    case 'B': cout << nombres[1] << endl; break;
    case 'C': cout << nombres[2] << endl; break;
    case 'D': cout << nombres[3] << endl; break;
    case 'E': cout << nombres[4] << endl; break;
    case 'F': cout << nombres[5] << endl; break;
    case 'G': cout << nombres[6] << endl; break;
    case 'H': cout << nombres[7] << endl; break;
    case 'I': cout << nombres[8] << endl; break;
    case 'J': cout << nombres[9] << endl; break;
    case 'K': cout << nombres[10] << endl; break;
    case 'L': cout << nombres[11] << endl; break;
    case 'M': cout << nombres[12] << endl; break;
    case 'N': cout << nombres[13] << endl; break;
    case 'O': cout << nombres[14] << endl; break;
    case 'P': cout << nombres[15] << endl; break;
    case 'Q': cout << nombres[16] << endl; break;
    case 'R': cout << nombres[17] << endl; break;
    case 'S': cout << nombres[18] << endl; break;
    case 'T': cout << nombres[19] << endl; break;
    case 'U': cout << nombres[20] << endl; break;
    case 'V': cout << nombres[21] << endl; break;
    case 'W': cout << nombres[22] << endl; break;
    case 'X': cout << nombres[23] << endl; break;
    case 'Y': cout << nombres[24] << endl; break;
    case 'Z': cout << nombres[25] << endl; break;
    default : cout << "Esa letra no existe" << endl; break;
  }
  int indice = inicial - 'A';
  cout << "Nombre de luchador " << nombres[indice] << endl;
}
