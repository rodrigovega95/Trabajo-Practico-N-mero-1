/*
 ============================================================================
 Name        : TrabajoPrácticoUnoRodrigoVega.c
 Author      : RodrigoVega
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	    int seguir = 1;
	    float numA;
	    float numB;
	    int flag1= 1;
	    int flag2= 1;
	    int flag3= 1;
	    float resSum;
	    float resRest;
	    float resMult;
	    float resDiv;
	    float factNumA;
	    float factNumB;
	    float cero = 0;

	    do
	    {

	        printf(" * * *   Bienvenido. Seleccione una opcion: * * *  \n \n \n");
	        printf("1- Ingresar/modificar primer operando: X= %.1f \n", numA);
	        printf("2- Ingresar/modificar segundo operando: Y= %.1f \n", numB);
	        printf("3- Calcular las siguientes operaciones: \n a.Calcular la suma (X+Y)\n b. Calcular la resta (X-Y)\n c. Calcular la division (X/Y)\n d.Calcular la multiplicacion (X*Y) \n e. Calcular el factorial (X!)\n ");
	        printf("4- Informar resultados: \n ");
	        printf("5- Salir \n");

	        scanf("%d", &opcion); //EL USUARIO COLOCA EL NÚMERO DE OPCIÓN DESEADA
	        fflush(stdout);

	        switch(opcion)
	        {
	        case 1:
	            numA = ingresarNum(); // LA FUNCIÓN TOMA EL NÚMERO QUE INGRESA EL USUARIO PARA EL OPERANDO.
	            flag1=0;
	            break;
	        case 2:
	            numB = ingresarNum(); // LA FUNCIÓN TOMA EL NÚMERO QUE INGRESA EL USUARIO PARA EL OPERANDO.
	            flag2=0;
	            break;
	        case 3: // EN ESTA OPCIÓN VAMOS A GUARDAR EN VARIABLES YA DECLARADAS LOS VALORES QUE NOS DEVUELVEN LAS FUNCIONES.
	            if(flag1==0 && flag2==0) // LOS FLAGS HACEN QUE NO SEA POSIBLE QUE SE EJECUTE ESTO SIN QUE HAYAN PASADO LOS DOS PARÁMETROS.
	            {
	                resSum = sumaAB(numA,numB); // SE PASAN POR PARÁMETROS LOS NÚMEROS INGRESADOS ANTERIORMENTE.
	                resRest = restaAB(numA,numB);
	                if(numB!=cero) // ESTE IF HACE QUE SI EL OPERANDO B ES 0, EL PROGRAMA NO CRASHEE.
	                {
	                    resDiv = divAB(numA,numB);
	                }
	                resMult = multiAB(numA,numB);
	                factNumA = factorial(numA);
	                factNumB = factorial(numB);
	                printf("Las operaciones ya fueron realizadas. :D \n"); // CARTEL QUE INDICA QUE TODAS LAS OPERACIONES YA FUERON REALIZADAS.
	                system("pause");
	                flag3=0; // FLAG DE LA OPCIÓN 3 ASÍ PODEMOS USAR LA OPCIÓN 4.


	            }
	            else
	            {
	                printf("Corrobore que haya ingresado los dos numeros antes de continuar. \n");
	                system("pause");

	            }

	            break;



	        case 4:
	            if (flag3 == 0)
	            {
	                printf("a. La suma de ambos terminos es: %g\n", resSum);
	                printf("b. La resta de ambos terminos: %g\n", resRest);
	                if(numB==cero)
	                {
	                    printf("c. No se puede dividir por cero. \n");
	                }
	                else
	                {
	                    printf("c. La division de A sobre B es: %g\n", resDiv);
	                }
	                printf("d. La multiplicacion de ambos terminos es: %g\n", resMult);
	                printf("e. El factorial de numero A es: %g\n", factNumA);
	                printf("e. El factorial de numero B es: %g\n", factNumB);
	                system("pause"); // YA MOSTRADOS LOS RESULTADOS, REINICIAMOS EL PROGRAMA,
	                numA=0;         //  REESTABLECIENDO POR DEFECTO LAS VARIABLES DE LOS OPERANDOS
	                numB=0;        //   Y LOS FLAGS.
	                flag1=1;
	                flag2=1;
	                flag3=1;


	            }
	            else
	            {
	                printf("Antes de hacer esto, deberias corroborar que ingresaste los dos valores y que hiciste los calculos. \n");
	                system("pause");

	            }

	            break;

	        case 5:
	            seguir = 0;
	            break;
	        }
	    }
	    while(seguir == 1);

	    printf("Gracias por utilizar esta calculadora. Vuelva prontos!");





	return EXIT_SUCCESS;
}
