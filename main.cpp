#include <iostream>
#include "numero.hpp"
#include "hexadecimal.hpp"
#include "octal.hpp"
#include "binario.hpp"
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

vector< string > numeros;
void nuevo();
void listar();
void operar();
void suma();
void resta();
void multiplicacion();
string formato( int resultado );
int binary( int numero );
int octales( int numero );
string hexa( int numero );
numero n1("0"), n2("0");
char tipo( string numero );
int main(){
  int opcion;
  do{
    n1.entero = 0;
    n1.tipo = ' ';
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
  char verificar = tipo( numeros[num1] );
  switch( verificar ){
    case 'b':{
              binario baux( numeros[num1] );
              n1 = baux;
              n1.tipo = 'b';
              cout << "Tipo: " << n1.tipo << " Valo: " << n1.entero << endl;
              break;
    }
    case 'o':{
              octal oaux( numeros[num1] );
              n1 = oaux;
              n1.tipo = 'o';
              cout << "Tipo: " << n1.tipo << " Valo: " << n1.entero << endl;
              break;
    }
    case 'h':{
            hexadecimal haux( numeros[num1] );
            n1 = haux;
            n1.tipo = 'h';
            cout << "Tipo: " << n1.tipo << " Valo: " << n1.entero << endl;
            break;
    }
    case 'e':{
           n1.entero = stoi(numeros[num1], nullptr, 10);
            break;
    }
  }
  char verificar2 = tipo( numeros[num2] );
  switch( verificar2 ){
    case 'b':{
              binario baux( numeros[num2] );
              n2 = baux;
              break;
    }
    case 'o':{
              octal oaux( numeros[num2] );
              n2 = oaux;
              break;
    }
    case 'h':{
            hexadecimal haux( numeros[num2] );
            n2 = haux;
            break;
    }case 'e':{
            n2.entero = stoi(numeros[num2], nullptr, 10);
            break;
    }

  }
  cout << "1- Sumar" << endl << "2- Restar" << endl << "3- Multiplicar" << endl << "Ingrese la opcion: ";
  cin >> opcion;
  if( opcion == 1 ) suma();
  if( opcion == 2 ) resta();
  if( opcion == 3 ) multiplicacion();
}

void suma(){
  cout << n1.entero << endl;
  cout << n2.entero << endl;
  int s = n1.entero + n2.entero;
  cout << "S " << s << endl;
  cout << "Resultado: " << formato(s) << endl;
}

void resta(){
  int r = n1.entero - n2.entero;
  cout << "r " << r << endl;
  cout << "Resultado: " << formato(r) << endl;
}

void multiplicacion(){
  int m =  n1.entero * n2.entero;
  cout << "m " << m << endl;
  cout << "Resultado: " << formato(m) << endl;
}

string formato( int resultado ){
  string formato = to_string(resultado);
  switch( n1.tipo ){
    case 'b':{
                int bin = binary( resultado );
                formato = to_string(bin);
                formato += "b";
            }
            break;
    case 'e':{
                formato = to_string( stoi( formato , nullptr, 10) );
            }
            break;
    case 'o':{
                formato = "0c";
                formato += to_string( octales( resultado ));
            }
            break;
    case 'h':{
              formato = hexa( resultado );
              break;
            }

  }
  return formato;
}

int binary(int numero){
  int exponente, digito;
  double binario;
  exponente = 0;
  binario = 0;
  while( numero / 2 != 0 ){
          digito = numero % 2;
          binario = binario + digito * pow(10.0,exponente);
          exponente++;
          numero=numero/2;
  }
  binario = binario + numero * pow(10.0,exponente );
   return binario;
}

int octales( int numero ){
    int aux, aux2 = 1, octal = 0;
    while( numero != 0 ) {
        aux = numero % 8;
        numero /= 8;
        octal += aux * aux2;
        aux2 *= 10;
    }
    return octal;
}

string hexa( int numero ){
  string acum= "";
  char letras[100];
  char letra;
  int i = 0;
  while( numero !=0){
      int temp  = 0;
      temp = numero % 16;
      if( temp < 10 ){
          letra = temp + 48;
          acum += letra;
          i++;
      }
      else{
          letra = temp + 55;
          acum += letra;
          i++;
      }
      numero /= 16;
  }
  string aux = "";
  for ( int j = i-1; j >= 0 ;j-- )
      aux += acum[j];
  return aux;
}

char tipo( string num ){
  if( num[num.size()-1] == 'b' ){
    return  'b';
  }else if( num[0] == '0' && num[1] == 'c' ){
    return  'o';
  }else if( num[0] == '0' && num[1] == 'x' ){
    return  'h';
  }else{
    return 'e';
  }
}
