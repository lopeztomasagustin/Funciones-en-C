#include <stdio.h>
#include <stdlib.h>


    void calcular(int,int, int operacion);
    float sumar(int numUno, int numDos);
    float restar(int numUno, int numDos);
    float multiplicar (int numUno, int numDos);
    float dividir (int numUno, int numDos);
    void mostrar();
    int main()
    {
        /*int valor;
        valor = sumar(33,77);
        printf("La suma es: %d", valor);*/

        calcular(1,1,2);
        calcular(3,7,1);
        calcular(10,2,4);
        calcular(2,3,3);

        //saludar();
        //sumar(valor);
        //return 0;
    }


    /*void saludar() //se arma una funcion para reutilizar el codigo
    {
        printf("Hola mundo\n");
    }*/

    /*int sumar(int numero1, int numero2) //se escribe el mismo nombre que arriba o un nombre
    {
        int suma = numero1 + numero2;
        printf("suma %d", numero1);
        return suma;
    }*/


    void calcular(int numUno,int numDos, int operacion)
    {
        int resultado;
        switch(operacion)
        {
            case 1:
                resultado = sumar(numUno+numDos);
                break;
            case 2:
                resultado = restar(numUno-numDos);
                break;
            case 3:
                resultado = multiplicar(numUno*numDos);
                break;
            case 4:
                resultado = dividir(numUno/numDos);
                break;
        }
         printf("El resultado es %d \n", resultado);

    }

    float sumar(int numUno, int numDos)
    {
        int suma = numUno + numDos;
        printf("%d", suma);
        return suma;
    }
    float restar(int numUno, int numDos)
    {
        int resta = numUno - numDos;
        printf("%d", resta);
        return resta;
    }
    float multiplicar(int numUno, int numDos)
    {
        int multiplicacion = numUno*numDos;
        printf("%d", multiplicacion)
        return multiplicacion;
    }
        float dividir(int numUno, int numDos)
    {
        int division = numUno/numDos;
        printf("%d", division)
        return division;
    }




