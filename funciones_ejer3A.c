#include <stdio.h>

int incrementar(int contador){
    return contador + 1;
}


int main() {
    int contador = 0;

    printf("%d \n", incrementar(contador));
    contador = incrementar(contador);
    printf("%d \n", incrementar(contador));
    contador = incrementar(contador);
    printf("%d \n", incrementar(contador));

    printf("Contador global = %d", contador);

    return 0;
}
