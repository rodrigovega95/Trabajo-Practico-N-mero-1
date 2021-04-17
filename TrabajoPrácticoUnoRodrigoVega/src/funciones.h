/*
 * funciones.h
 *
 *  Created on: 17 abr. 2021
 *      Author: admin
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_


float ingresarNum()
{
    float numAB;
    printf("Ingrese el valor del numero deseado: ");
    scanf("%g", &numAB);
    fflush(stdout);
    system("pause");
    return numAB;
}


float sumaAB(float x, float y)
{
    float resultado = x+y;
    return resultado;
}

float restaAB(float x, float y)
{
    float resultado =x-y;
    return resultado;
}

float multiAB(float x, float y)
{
    float resultado=x*y;
    return resultado;
}

float divAB(float x, float y)
{

    float resultado = x/y ;
    return resultado;

}

float factorial(float x)
{

    float f = 1;
    for (float i = x ; i > 1 ; i--){
        f = f * i;
    }
    return f;
}


#endif /* FUNCIONES_H_ */
