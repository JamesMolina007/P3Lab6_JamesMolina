#pragma once
#include <iostream>

using namespace std;

class numero{
  friend ostream &operator << (ostream &, const numero &);
  int entero;
  string original;
  public:
    numero();
    numero( string num );
    virtual numero operator-(numero num2);
    virtual numero operator+(numero num2);
    virtual numero operator*(numero num2);
    void convertido( string num );
};
