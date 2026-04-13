#include  <stdio.h>
#include <stdlib.h>

int main(){
    printf("hola mundo\n\n");

    int *p;
    int valor=3;
    p=&valor;

    printf("Contenido del puntero: %d\n", *p);
    printf("Direccion de memoria almacenada por el puntero: %p\n", p);
    printf("Direccion de memoria de la variable: %p\n", &valor);
    printf("Direccion de memoria del puntero: %p\n", &p);
    printf("Tamanio de memoria utilizado por la variable: %d bytes", sizeof(valor));





    return 0;
}