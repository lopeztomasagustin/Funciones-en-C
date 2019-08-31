
#include <stdlib.h>
#include "aritmeticas.h"
#include "funcion.h"

   /*int factorial(int);*/

    int main()
    {
        int edad = pedirEntero("Ingrese edad: ", 1, 100);
        int legajo = pedirEntero("Ingrese legajo: ", 0, 1000);
        int nota = pedirEntero("Ingrese nota: ", 1, 10);
        int documento = pedirEntero("Ingrese documento: ", 0, 10000);

        printf("%d--%d--%d--%d\n\n", edad, legajo, nota, documento);
        return 0;
        /*int resultado;
        resultado = factorial(5);
        printf("El factorial es: %d", resultado);*/
    }

    int factorial(int numero)
    {
        int resultado;
        if (numero == 0)
            {
                resultado = 1;
            }else
            {
                resultado = numero * factorial(numero - 1);
            }

        return resultado;



    }

