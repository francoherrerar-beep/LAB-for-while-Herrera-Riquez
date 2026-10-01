#include <stdio.h>
int n=10;
void incrementar() {
 n = n + 1;
 printf("Dentro de incrementar: x = %d\n", n);
}
int main(void) {
 incrementar();
 printf("Despues de llamar: n = %d\n", n); 
 return 0;
}
