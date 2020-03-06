#pragma once
#include "numero.hpp"
#include <iostream>

using namespace std;

class hexadecimal : public numero{
  protected:
    numero num;
  public:
    hexadecimal();
    numero operator-(numero num2);
    numero operator+(numero num2);
    numero operator*(numero num2);
    string toString();
    void convertir();
};
