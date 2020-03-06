#include "numero.hpp"

using namespace std;

numero::numero(){
}

numero::numero( string num ){
  original = num;
  convertido( num );
}

void numero::convertido( string num ){
  if( num[num.size()-1] == 'b' ){
    string bin = "";
    for (int i = 0; i < num.size()-1; i++) bin+=num[i];
    entero = stoi( bin , nullptr, 2);
  }else if( num[0] == '0' && num[1] == 'c' ){
    string oct = "";
    for (int i = 2; i < num.size(); i++) oct+=num[i];
    entero = stoi(oct, nullptr, 8);
  }else if( num[0] == '0' && num[1] == 'x' ){
    entero = stoi(num, nullptr, 16);
  }else{
    entero = stoi(num, nullptr, 1);
  }

}

numero numero::operator-(numero num2){
  return num2;
}

numero numero::operator+(numero num2){
  return num2;
}
numero numero::operator*(numero num2){
  return num2;
}
