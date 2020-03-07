#include "numero.hpp"
#include "binario.hpp"

using namespace std;

binario::binario( string num ){
  this->num = num;
  convertir( num );
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

void binario::convertir(string num){
  string bin = "";
  tipo = 'b';
  for (int i = 0; i < num.size()-1; i++) bin+=num[i];
  entero = stoi( bin , nullptr, 2);
}
