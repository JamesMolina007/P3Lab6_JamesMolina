#pragma once
#include "numero.hpp"
#include <iostream>

using namespace std;

class hexadecimal : public numero{
  protected:
    string num;
    int convertido;
  public:
    hexadecimal();
    hexadecimal( string numero );
    //int operator-(numero num2);
    //int operator+(numero num2);
    //int operator*(numero num2);
    string toString();
    void convertir( string num);
};
