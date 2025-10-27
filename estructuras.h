#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <string>
using namespace std;

struct Usuario {
    string nombre;
    string correo;
    string clave;
};

struct Producto {
    int idProducto;
    string nombre;
    float valorUnitario;
    int cantidadDisponible;
    string fechaIngreso;
};

struct Comentario {
    string autor;
    string contenido;
    string fecha;
};

struct CarritoItem {
    Producto producto;
    int cantidad;
};

struct CarritoDeCompras {
    int idCarrito;
    string correoUsuario;
    CarritoItem items[100];
    int cantidadItems;
};

#endif
