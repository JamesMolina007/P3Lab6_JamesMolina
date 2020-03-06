#include "numero.hpp"
#include <iostream>

using namespace std;

numero::numero( string num ){
  original = num;
  convertido( num );
}

void numero::convertido( string num ){
  if( num[num.size()] == 'b' ){
    entero = stoi(num, nullptr, 2);
  }else if( num[0] == '0' && num[1] == 'c' ){
    entero = stoi(num, nullptr, 8);
  }else if( num[0] == '0' && num[1] == 'x' ){
    entero = stoi(num, nullptr, 16);
  }else{
    entero = stoi(num, nullptr, 1);
  }
}
