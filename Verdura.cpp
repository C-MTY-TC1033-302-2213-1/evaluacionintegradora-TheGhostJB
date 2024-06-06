/*Diego Saldaña Gómez A01571609 Jun 6, 2024*/
#include "Verdura.h" 
using namespace std;

  Verdura::Verdura() : Producto() {
    temporada = "Invierno";
  }

  Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada): Producto(_nombre, _precio, _peso){
    temporada = _temporada;
  }

string Verdura::str(){
  return nombre + "-" + "$" + to_string(precio) + "-" + to_string(peso) + "-" + "$" + to_string(calculaTotalPagar()) + "-" + temporada;
}

int Verdura::calculaTotalPagar(){
  if(temporada == "Junio"){
      return precio*peso*2;
  }
  else if(temporada == "Regalado"){
      return precio*peso*3;
  }
  else{
      return precio*peso*10;
  }
    }