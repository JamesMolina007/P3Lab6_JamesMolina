#include <iostream>
#include "numero.hpp"
#include "hexadecimal.hpp"
#include "octal.hpp"
#include "binario.hpp"
#include <vector>

using namespace std;

vector< string > numeros;
void nuevo();
void listar();
void operar();
numero n1("0"), n2("0");

int main(){
  int opcion;
  do{
    cout << endl << endl;
    cout << "0- Salir" << endl << "1- Ingresar numero" << endl << "2- Listar numeros" << endl;
    cout << "3- Operacion" << endl << "Ingrese la opcion: ";
    cin >> opcion;
    if( opcion == 1 ) nuevo();
    if( opcion == 2 ) listar();
    if( opcion == 3 ) operar();
  }while ( opcion );
}

void nuevo(){
  string numero;
  cout << "Ingrese el numero: ";
  cin >> numero;
  numeros.push_back(numero);
}

void listar(){
  cout << endl;
  cout << "*********Numeros*********" << endl;
  for (int i = 0; i < numeros.size(); i++) {
    cout << "Numero " << i << ": " << endl << numeros[i];
    cout << endl << endl;
  }
  cout << "*************************" << endl;
}

void operar(){
  listar();
  int num1, num2, opcion;
  do{
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
  }while( num1 < 0 || num1 > numeros.size() || num2 < 0 || num2 > numeros.size() );
  numero n4( numeros[num1] );
  n1 = n4;
  numero n3( numeros[num2] );
  n2 = n3;
  cout << "1- Sumar" << endl << "2- Restar" << endl << "3- Multiplicar" << endl << "Ingrese la opcion: ";
  cin >> opcion;
  if( opcion == 1 );
  if( opcion == 2 );
  if( opcion == 3 );
}
