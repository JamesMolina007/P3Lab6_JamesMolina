#pragma once
#include "numero.hpp"
#include <iostream>

using namespace std;

class octal : public numero{
  protected:
    string num;
    int convertido;
  public:
    octal();
    numero operator-(numero num2);
    numero operator+(numero num2);
    numero operator*(numero num2);
    string toString();
    void convertir();
};
