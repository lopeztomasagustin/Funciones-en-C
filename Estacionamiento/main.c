#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"

int main()
{
    ePersona ListadoDePersonas[4];
    eVehiculo ListadoDeVehiculos[4];
    cargarPersonas(ListadoDePersonas,4);
    cargarVehiculos(ListadoDeVehiculos,4);
    mostrarPersonas(ListadoDePersonas,4);
    mostrarVehiculos(ListadoDePersonas,ListadoDeVehiculos,4,4);
    printf("\n Estacionamiento!\n");
    return 0;
}

