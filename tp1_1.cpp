#include <stdio.h>

int main(){
    printf("Hola mundo");
    int var1 = 6;
    int *pvar1;
    pvar1 = &var1;
    


    printf("El contenido del puntero es: %d",*pvar1);
    printf("La direccion de memoria almacenada en el puntero es: %d",pvar1);
    printf("La direccion de memoria de la variable es: %d",&var1);
    printf("La direccion de memoria del puntero es: %d",&pvar1);
    printf("El contenido del puntero es: %d",*pvar1);

    printf("El tamaño de la variable es %d",sizeof(var1));
}