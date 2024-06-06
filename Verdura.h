/*Diego Saldaña Gómez A01571609 Jun 6, 2024*/

#ifndef Verdura_h
#define Verdura_h

#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include "Producto.h"
#include "Combo.h"
using namespace std;

class Verdura : public Producto{
private: 
  string temporada;

public:
  Verdura();
  Verdura(string _nombre, int _precio, int _peso, string _temporada);


  string str();

  int calculaTotalPagar();

};

#endif /* Verdura.h */