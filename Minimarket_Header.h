#include <stdio.h>
#include <stdlib.h>

catalogos();
consultar();
registro_ventas();
int id, i, opcion, pos=-1;
float precio;
char Descripcion[100][35], marca[100][30], Tipo_producto[100][15];

int catalogos()
{

  if(i<100)
  {
    do{
    printf("Ingrese el ID del producto [%s]: ", i+1);
    fflush(stdin);
    gets(id[i]);

    printf("Describa el producto: ");
    fflush(stdin);//se imprimira del 1 al 100
    gets(Descripcion[i]);

    printf("Marca del producto: ");
    fflush(stdin);
    gets(marca[i]);

    printf("Ingrese el tipo de producto:  (fruta/verdura/lacteos/cereales/carnes)");
    fflush(stdin);
    gets(Tipo_producto[i]);

    printf("Cual es el precio del producto: ");
    scanf("%f", &precio[i]);

    printf("Quiere agregar otro producto?: 1 = Si o 2 = No \n");
    scanf("%d", &opcion[i]);

  }while(opcion!=1)
  }
  else
  printf("Ya no hay mas espacio en la memoria\n");

}


int consultar()
{
  char opcionesMenu;

  printf("\t \t Menu de consultas \n");
  printf("\t A. Consulta General.\n");
  printf("\t B. Consulta por ID.\n");
  printf("\t C. Consulta por marca.\n");
  printf("\t D. Consulta por tipo de producto.\n");
  printf("\t E. Consulta ordenada\n");
  printf("\t F. Salir al Menu principal\n");
  scanf("%c\n",opcionesMenu);
  switch (opcionesMenu)
  {
    case 'a':
    case 'A':
    printf("Consulta General\n");

    for(i=0;i<100;i++)
    {
      printf("\n%s          %s          %s           %s          $.2f", id[i], marca[i], Tipo_producto[i], precio[i]);
    }

    break;

    case 'b':
    case 'B':
    printf("\t Consulta por ID.\n");
    printf("Ingrese el ID del articulo: ");
    gets(id[i]);
    for(i=0;i<100;i++)
    {
      if(id[i]==buscar)
    }
    break;


    case 'c':
    case 'C':
    printf("Consulta por marca.\n");
    break;


    case 'd':
    case 'D':
    printf("Consulta por tipo de producto.\n");
    break;


    case 'e':
    case 'E':
    printf("Consulta ordenada\n");
    break;


    case 'f':
    case 'F':
    printf("De vuelta al menu principal\n");
    break;

    default: printf("Ingrese una de la opciones del menu... intente de nuevon\n");


  }
}

int registro_ventas()
{
  char opcionesVentas;
  printf("\t \t Opciones del registro de ventas\n");
  printf("\t A. Registrar ventas.\n");
  printf("\t B. Presentar Grafica de ventas\n");
  printf("\t C. Cambiar de mes.\n");
  printf("\t D. Desglose de ventas.\n");
  printf("\t E. Salir al menu principal.\n");
  scanf("%c\n",opcionesVentas);

  switch (opcionesVentas)
  {
    case 'a':
    case 'A':
    printf("Registra Ventas.\n");
    break;


    case 'b':
    case 'B':
    printf("Presentar Grafica de ventas.\n");
    break;


    case 'c':
    case 'C':
    printf("Cambiar de mes.\n");
    break;


    case 'd':
    case 'D':
    printf("Desglose de ventas.\n");
    break;


    case 'e':
    case 'E':
    printf("De vuelta al menu principal.\n");
    break;

    default: printf("Ingrese una de la opciones del menu... intente de nuevon\n");

  }

}
