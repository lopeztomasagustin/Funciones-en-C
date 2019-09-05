#include "Funciones.h"

    void mostrarArray(int miArray[],int cantidad)
    {
        int i;
        for(i=0; i < cantidad; i++)
        {
            printf("Edad numero_(%d)", i+1);
            printf(":");
            printf("%d\n", miArray[i]);
        }

    }

    int elMaximo(int myArray[], int cantidad)
    {
        int i;
        int maximo;
        for(i=0; i < cantidad; i++)
        {
          if(myArray[i] > maximo || i==0)
          {
              maximo = myArray[i];
          }
        }
        return maximo;
    }

    void inicializarArray(int myArray[], int cantidad)
    {
        int i;

        for(i=0;i<cantidad;i++)
        {
            myArray[i] = 0;
        }
        cantidad=666;
    }

    void cargaSecuencialDelArray(int elArray[], int cantidad, char mensaje [])
    {
        int i;

        for(i=0; i<cantidad; i++)
        {
            printf(mensaje);
            fflush(stdin);
            scanf("%d", &elArray[i]);
        }
    }

    int elMinimo(int myArray[], int cantidad)
    {
        int i;
        int minimo;
        for(i=0; i < cantidad; i++)
        {
          if(myArray[i] < minimo || i==0)
          {
              minimo = myArray[i];
          }
        }
        return minimo;
    }
    float elPromedio(int elArray[], int cantidad)
    {
        int i;
        float suma;
        for(i=0; i < cantidad; i++)
        {
            suma = elArray[i] + suma;
        }
        suma = suma / i;
        printf("El promedio es: %.2f\n", suma);
        return suma;
    }
    void ordenarDeMayoraMenor(int myArray[], int cantidad)
    {
        int i;
        int j;
        int aux;

        for(i=0;i<cantidad;i++)
        {
            for(j=i+1;j<cantidad;j++)
            {
                if(myArray[i] < myArray[j])
                {
                    aux = myArray[i];
                    myArray[i] = myArray[j];
                    myArray[j] = aux;
                }
            }


        }

    }
    void ordenarDeMenor(int myArray[], int cantidad)
    {
        int i;
        int j;
        int aux;

        for(i=0;i<cantidad;i++)
        {
            for(j=i+1;j<cantidad;j++)
            {
                if(myArray[i] > myArray[j])
                {
                    aux = myArray[i];
                    myArray[i] = myArray[j];
                    myArray[j] = aux;
                }
            }


        }

    }




