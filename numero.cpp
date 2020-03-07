#include "numero.hpp"

using namespace std;

numero::numero(){
}

numero::numero( string num ){
  original = num;
}

int numero::operator-(numero num2){
  return (*this).entero-num2.entero;
}

int  numero::operator+(numero num2){
  return (*this).entero + num2.entero;
}

int numero::operator*(numero num2){
  return (*this).entero * num2.entero;
}
