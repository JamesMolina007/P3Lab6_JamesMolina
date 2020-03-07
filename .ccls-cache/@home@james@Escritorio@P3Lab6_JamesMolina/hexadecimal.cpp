#include "numero.hpp"
#include "hexadecimal.hpp"

using namespace std;

hexadecimal::hexadecimal( string numero ){
  num = numero;
  convertir( numero );
}

void hexadecimal::convertir( string num ){
  entero = stoi(num, nullptr, 16);
  tipo = 'h';
}
