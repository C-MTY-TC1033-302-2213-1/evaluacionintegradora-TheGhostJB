/*Diego Saldaña Gómez A01571609 Jun 6, 2024*/

#ifndef Producto_h
#define Producto_h

#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


class Producto{
protected:
    string nombre;
    int precio, peso;
public:
    Producto();
    Producto(string _nombre, int _precio, int _peso);

    void setNombre(string _nombre);
    void setPrecio(int _precio);
    void setPeso(int _peso);

    string getNombre();
    int getPrecio();
    int getPeso();

    virtual string str();

    virtual int calculaTotalPagar();

};

#endif /* Producto.h */