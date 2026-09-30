#include <stdio.h>
int main(){
int contador=0;
int n;
do
{
    printf("ingres el numero: \n");
scanf("%d",&n);
} while (n<0 || 1000<n);

if(n==1){
    printf("%d \n",contador);
} else {
    while(n!=1){
        if(n%2==0){
            n=n/2;
            contador++;
        } else {
            n=3*n +1;
            contador++;
        }
    }
    printf("la mayor semilla es %d \n",contador);


}


return 0;
}