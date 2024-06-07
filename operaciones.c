#include <stdio.h>
#include <string.h>
#include "operaciones.h"
#include "funciones.h"

void IngresarAlSistema(char clave[NOMBRE]){
    do {
      printf("Ingrese la clave de seguridad");
    scanf("%s", clave);
    if (strcmp(clave, CONTRASEÑA) !=0){
        printf("Contraseña Incorrecta. Intente de nuevo por favor. \n");

    }  
    } while (strcmp(clave, CONTRASEÑA) !=0);
}  
void ingresarProducto(int numP, char nombreP[][NOMBRE], int cant[], float valor[], float descuento[]){
    for (int i=0; i < numP; i++){
        printf("Producto %d : \n", i+1);
        printf("Nombre:");
        getchar();
        fgets(nombreP[i], NOMBRE, stdin);
        nombreP[i][strcspn(nombreP[i], "\n")]='\0';
        printf("Cantidad:");
        scanf("%d", &cant[i]);
        printf("Valor por unidad:");
        scanf("%f", &cvalor[i]);
        printf("Descuento del dia:");
        scanf("%d", &descuento[i]);
    }
}

void BuscarProductos(char nombreP[][NOMBRE], int numP[], char Busqueda[], int name){
    printf("Igrese el porducto que desea buscar");
    getchar();
    fgets(Busqueda, name, stdin);
    Búsqueda[strcspn(Búsqueda, "\n")]='\0';
    int find=0;
    for(int i=0, i < numP; i++){
        if (strcmp(nombreP[i], Busqueda)==0){
            printf("Está en lista\n");
            find=1;
            break;
        }
        if (!find){
            printf("No está en lista\n");
        }

    }

}
void mostrarProducto(char nombreP[][NOMBRE], int cant[], float valor[], float descuento[], int numP){
    printf("%-12s %6s %8s %10s %8s\n", "Producto", "Cantidad", "Valor", "Descuento del día", "Precio Total");
    printf("-------------\n");
    for (int i=0; i < numP; i++);
    float valortotal= valor[i]*(1-descuento[i]/100);
    printf("%-12s %6d %8.2f %10.2f %8.2f\n", nombreP[i], cant[i], valor[i], descuento[i], valor[i]);
    

}