#include <stdio.h>

int potencia(int numero);
void potenciaVoid(int numero);
void contenidoDirecc(int numero);
void invertir(int numero1,int numero2);
void orden(int numero1,int numero2);


int main(){
    int numero1,numero2,resultado;

    printf("Ingrese el numero 1: ");
    scanf("%d",&numero1);
    printf("Ingrese el numero 2: ");
    scanf("%d",&numero2);
    resultado = potencia(numero1);
    potenciaVoid(numero1);
    contenidoDirecc(numero1);
    invertir(numero1,numero2);
    orden(numero1,numero2);
}

int potencia(int numero){
    int resultado;
    resultado = numero*numero;
    return resultado;
}
void potenciaVoid(int numero){
    int resultado;
    resultado = numero*numero;
    printf("%d",resultado);
}
void contenidoDirecc(int numero){
    printf("La direccion de la variable es %d",&numero);
    printf("La direccion de la variable es %d",numero);
}
void invertir(int numero1,int numero2){
    int aux;
    aux = numero1;
    numero1 = numero2;
    numero2 = aux;
    printf("Orden anterior era %d %d y el orden actual es %d %d",aux,numero1,numero1,numero2);
}
void orden(int numero1,int numero2){
    int mayor = 0,primerNumero = 0;
    if (numero1 > mayor )
    {
        mayor = numero1;
    }else{
        primerNumero = numero1;
    }
    if (numero2 > mayor )
    {
        mayor = numero2;
        primerNumero = numero1;
    }else{
        primerNumero = numero2;
    }
    printf("orden %d %d",primerNumero,mayor);
    
}
