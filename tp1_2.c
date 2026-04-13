#include <stdio.h>
#include <stdlib.h>

int numero_cuadrado (int numero) {
    numero = numero * numero;
    return numero;
}
void numero_cuadrado2(int numero2){

    numero2 *= numero2;
    printf("Cuadrado de b = %i\n", numero2);
}
void mostrar(int *p){
    printf("Direccion de memoria: %p, contenido: %i", p, *p);
}
void invertir(int *a, int *b){
    int guardado;
    guardado = *a;
    *a = *b;
    *b = guardado;
}
void orden(int *c, int *d){
    int ayudin;
    if(*c > *d){
        ayudin = *c;
        *c = *d;
        *d = ayudin;
    }
}
    
int main() {
    int x, y; 

    printf("Ingrese el primer numero (X): ");
    scanf("%i", &x);
    printf("Ingrese el segundo numero (Y): ");
    scanf("%i", &y);

    printf("\nVariable X = %i\n", x);
    printf("Variable Y = %i\n\n", y);

    printf("Cuadrado de X = %i\n", numero_cuadrado(x));
    numero_cuadrado2(y);

   
    printf("\nVariable X:\n");
    mostrar(&x);
    

    invertir(&x, &y);
    printf("\n\nValores invertidos: \n");
    printf("X = %i\n", x);
    printf("Y = %i\n", y);

    orden(&x, &y);
    printf("\nValores ordenados: \n");
    printf("Valor menor: X = %i\n", x);
    printf("Valor mayor: Y = %i\n", y);

    return 0;
}