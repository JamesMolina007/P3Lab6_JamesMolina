#pragma once
#include <iostream>

using namespace std;

class numero{
//  friend ostream &operator << (ostream &, const numero &);
  string original;
  public:
    char tipo;
    int entero;
    numero();
    numero( string num );
    virtual int operator-(numero num2);
    virtual int operator+(numero num2);
    virtual int operator*(numero num2);
    //void convertido( string num );
};
