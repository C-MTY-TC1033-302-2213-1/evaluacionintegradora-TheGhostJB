/*Diego Saldaña Gómez A01571609 Jun 6, 2024*/

#include "Combo.h"
using namespace std;

Combo::Combo(): Producto(){
  clave = 0;
}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave):Producto(_nombre, _precio, _peso){
  clave = _clave;
}

string Combo::str(){
  return nombre + "&" + "-" + "$" + to_string(precio) + "-" + to_string(peso) + "-" + + "$" + to_string(calculaTotalPagar()) + "-" + to_string(clave);
}

 int Combo::calculaTotalPagar(){
    int total = precio * peso * clave;
    if(clave == 1){
        return total - (total/100 * 25);
    }else if(clave == 2){
        return total - (total/100 * 30);
    }else{
        return total;
    }
}
