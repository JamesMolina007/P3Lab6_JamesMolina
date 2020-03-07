#include "numero.hpp"
#include "octal.hpp"

using namespace std;

octal::octal( string num ){
  this->num = num;
  convertir( num );
}

void octal::convertir( string num ){
  string oct = "";
  tipo = 'o';
  for (int i = 2; i < num.size(); i++) oct+=num[i];
  entero = stoi(oct, nullptr, 8);
}
