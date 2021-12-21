#pragma once
#include <stdlib.h>
#include <stdio.h>
#include "Header1.h"


int main()
{
	int opcion = 0, opelegida = 0; 
	float valor1 = 0, valor2 = 0, resultado = 0;

	printf_s(" Elija una de las siguientes opcciones \n " );
	printf_s("1.- Ejecutar calculadora \n ");
	printf_s("2.- Salir \n");

	scanf_s("%d", &opcion);

	while (opcion != 2)
	{
		if (opcion == 1)
		{
			printf_s("Introdusca el primer valor \n");
			scanf_s("%f", &valor1);
			printf_s("Introdusca el segundo valor \n");
			scanf_s("%f", &valor2);

			printf_s(" Elija una de la operacion a realisar \n ");
			printf_s("1.- Suma \n ");
			printf_s("2.- Resta \n");
			printf_s("3.- Producto \n");
			scanf_s("%d", &opelegida);

			switch (opelegida)
			{ 
			case 1: //Mandar a llamar funcion suma
				resultado = suma(valor1, valor2);
				break;
			case 2: //Mandar a llamar funcion resta
				resultado = resta(valor1, valor2);
				break;
			case 3: // Mandar a llamar funcion producto
			default: printf_s("Operacion novalida");
				break;
			}
			printf_s("El resultado es: %f \n", resultado);
		}
		else if (opcion != 2)
		{
			printf_s("opcion invalida \n");
		}
		printf_s(" Elija una de las siguientes opcciones \n ");
		printf_s("1.- Ejecutar calculadora \n ");
		printf_s("2.- Salir \n");

		scanf_s("%d", &opcion);
		printf_s("La opcion elegida es %d", opcion);
	};
	printf_s("bye"); 
	exit(0);
};

