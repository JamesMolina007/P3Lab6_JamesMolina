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
    octal( string num );
    //int operator-(numero num2);
    //int operator+(numero num2);
    //int operator*(numero num2);
    string toString();
    void convertir( string num );
};
