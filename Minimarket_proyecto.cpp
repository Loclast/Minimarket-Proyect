//PROYECTO FINAL DE PROGRAMACION
//Empresa "MINIMARKET"

#include <stdio.h>
#include <stdlib.h>
#include "Minimarket_Header.h"

int main()
{
  char opciones;

  printf("\t \t \t SISTEMA PRINCIPAL \n");
  printf("\t A. Catalogo de Productos.\n");
  printf("\t B. Consultas. \n");
  printf("\t C. Registro de Ventas");
  printf("\t D. Salir del programa");

  switch (opciones)
  {
    case 'a':
    case 'A':
    catalogos();
    break;


    case 'b':
    case 'B':
    consultar();
    break;


    case 'c':
    case 'C':
    registro_ventas()

    break;

    case 'd':
    case 'D':
    printf("Eligo salir del programa...");
    break;

    default: printf("No es ninguna de las opciones... facor de escoger nuevamente");
  }


  return 0;
  system("pause");


}
