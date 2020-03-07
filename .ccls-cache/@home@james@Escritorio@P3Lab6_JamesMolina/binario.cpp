#include "numero.hpp"
#include "binario.hpp"

using namespace std;

binario::binario( string num ){
  this->num = num;
  convertir( num );
}
  
void binario::convertir(string num){
  string bin = "";
  tipo = 'b';
  for (int i = 0; i < num.size()-1; i++) bin+=num[i];
  entero = stoi( bin , nullptr, 2);
}
