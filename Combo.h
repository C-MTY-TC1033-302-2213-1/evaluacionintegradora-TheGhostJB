/*Diego Saldaña Gómez A01571609 Jun 6, 2024*/
#ifndef Combo_h
#define Combo_h

#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include "Verdura.h"
#include "Producto.h"
#include "Pedido.h"
using namespace std;


class Combo : public Producto{
private:
  int clave;

public: 
  Combo();
  Combo(string _nombre, int _precio, int _peso, int _clave);

  string str();

  int calculaTotalPagar();

};

#endif /*Combo.h*/
