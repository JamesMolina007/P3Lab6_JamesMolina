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
    binario( string num );
    string toString();
    void convertir( string num );
};
