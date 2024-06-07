#include <stdio.h>
#include "funciones.h"
#include "operaciones.h"
int main (int argc, char *argv[]) {
    char clave[NOMBRE];
    IngresarAlSistema(clave);
    printf("Sistema de Ingreso de Porductos de EcoMart\n");
    char nombreP[PRODUCTO][NOMBRE];
    int cant[PRODUCTO];
    float valor[PRODUCTO],descuento[PRODUCTO];
    int numP = leerEnteroPositivo("Productos a Ingresar: ");
    nombreP[numP][NOMBRE],cant[numP];
    valor[numP],descuento[numP];
    ingresarProducto(numP,nombreP, cant,valor,descuento);
    printf("-----Productos Ingresados----\n");
    mostrarProducto(nombreP, cant, valor, descuento, numP);
    char Busqueda[NOMBRE];
    int encontrar, exit;
    encontrar= leerEntero("¿Desea revisar si está en lista? (Si = 1, No = 0)");
    if(encontrar ==1){
      do{
        BuscarProductos(nombreP, numP, Busqueda, NOMBRE);
        exit = leerEntero("Desea continuar (Si = 1, No = 0)");
      }while(exit!=0);
    }
    
    return 0;
}