#include <stdlib.h>
#include "Funciones.h"

    int main()
    {
        int listadoDeEdades[6];//Se empieza por el cero, cuenta 0,1,2 y el 3 no existe. Listado de numeros es
                               //dirección de variables.
        //listadoDeNumeros[0] = 66;<------ casi nunca se usa un numero dentro del corchete, sino que se usan variables

        int maximo;
        int minimo;
        inicializarArray(listadoDeEdades,6);
        cargaSecuencialDelArray(listadoDeEdades, 6, "Ingrese Edades: ");
        ordenarDeMayoraMenor(listadoDeEdades, 6);
        mostrarArray(listadoDeEdades,6);
        elPromedio(listadoDeEdades,6);
        maximo = elMaximo(listadoDeEdades, 6);
        minimo = elMinimo(listadoDeEdades,6);
        printf("El maximo es: %d\n", maximo);
        printf("El minimo es: %d", minimo);
    }


