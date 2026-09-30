#include <stdio.h>

int main(){
    double n;

    do{
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &n);

    }while(n <= 0);

    double suma = 0.00000;

    for(int i = 1; i <= n; i++){
        if( i % 2 != 0.000000 ){
            suma = suma + (double)(1/i);
        }else if( i % 2 == 0.00000){
            suma = suma - (double)(1/i);
        }
        
        i++;
    }

    printf("La suma armonica obtenida es: %lf", suma);



    return 0;
}