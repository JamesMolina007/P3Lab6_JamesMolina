#pragma once
#include "numero.hpp"
#include <iostream>

using namespace std;

class binario : public numero{
  protected:
    string num;
    int convertido;
  public:
    binario();
    numero operator-(numero num2);
    numero operator+(numero num2);
    numero operator*(numero num2);
    string toString();
    void convertir();
};
