#include "numero.hpp"

using namespace std;

numero::numero(){
}

numero::numero( string num ){
  original = num;
  //convertido( num );
}

/*void numero::convertido( string num ){
  if( num[num.size()-1] == 'b' ){
    string bin = "";
    tipo = 'b';
    for (int i = 0; i < num.size()-1; i++) bin+=num[i];
    entero = stoi( bin , nullptr, 2);
  }else if( num[0] == '0' && num[1] == 'c' ){
    string oct = "";
    tipo = 'o';
    for (int i = 2; i < num.size(); i++) oct+=num[i];
    entero = stoi(oct, nullptr, 8);
  }else if( num[0] == '0' && num[1] == 'x' ){
    entero = stoi(num, nullptr, 16);
    tipo = 'h';
  }else{
    entero = stoi(num, nullptr, 10);
    tipo = 'e';
  }

}*/

int numero::operator-(numero num2){
  return (*this).entero-num2.entero;
}

int  numero::operator+(numero num2){
  return (*this).entero + num2.entero;
}

int numero::operator*(numero num2){
  return (*this).entero * num2.entero;
}
