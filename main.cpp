//
//  main.cpp
//  ExamenTC1030JUNIO2023
//
//  Created by Ma. Guadalupe Roque Díaz de León on 06/06/23.
//
/*Diego Saldaña Gómez A01571609 Jun 6, 2024*/


#include "Pedido.h"
#include "Combo.h"
#include "Verdura.h"
#include "Producto.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

    Pedido pedido;
    int opcion;

    cin >> opcion;

    switch (opcion) {
        case 1:
            pedido.leerArchivo("Pedido1.csv");
            break;
        case 2:
            pedido.leerArchivo("Pedido2.csv");
            break;
        case 3:
            pedido.leerArchivo("Pedido3.csv");
            break;
        case 4:
            pedido.leerArchivo("Pedido4.csv");
            break;
        default:
            break;
    }

    pedido.ticketCliente();

    return 0;
}
