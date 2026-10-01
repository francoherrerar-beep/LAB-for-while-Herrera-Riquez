#include <stdio.h>
int suma_digitos(int n);
int raiz_digital(int n);
void imprimir_traza(int n);

int main(){
int n;
do{
    printf("ingrese el numero: \n");
scanf("%d",&n);
} while(n<0);

if(n==1){
printf("el numero es 1");
} else {
    imprimir_traza(n);
    printf("la raiz digital es %d \n",raiz_digital(n));
}

return 0;
}
int suma_digitos(int n) {
 int suma = 0;
 while (n > 0) {
 suma += n % 10;
 n /= 10;
 }
 return suma;
}

int raiz_digital(int n){
    while(n>=10){
n=suma_digitos(n); }
return n;
}
void imprimir_traza(int n){
printf("%d",n);
while(n>=10){
    n=suma_digitos(n);
    printf(" -> %d", n);
}
printf("\n");
}



