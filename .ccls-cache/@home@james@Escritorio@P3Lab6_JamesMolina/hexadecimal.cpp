#include "numero.hpp"
#include "hexadecimal.hpp"

using namespace std;

hexadecimal::hexadecimal( string numero ){
  num = numero;
  convertir( numero );
}

/*int numero::operator-(numero num2){
  return (*this).entero - num2.entero;
}

int numero::operator+(numero num2){
  return (*this).entero + num2.entero;
}

int numero::operator*(numero num2){
  return (*this).entero * num2.entero;
}*/

void hexadecimal::convertir( string num ){
  entero = stoi(num, nullptr, 16);
  tipo = 'h';
}
