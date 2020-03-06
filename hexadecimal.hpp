#pragma once
#include "numero.hpp"
#include <iostream>

using namespace std;

class hexadecimal : public numero{
  protected:
    string numero1;
    string numero2;
    int convertido1;
    int convertido2;
  public:
    hexadecimal();
    hexadecimal( string num );
    numero operator-(numero num2);
    numero operator+(numero num2);
    numero operator*(numero num2);
    string toString();
    void convertir();
};
