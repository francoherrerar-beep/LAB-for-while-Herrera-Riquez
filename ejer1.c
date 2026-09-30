#include <stdio.h>

int main(){
    int n,m;
    int suma1=0;
    int suma2;
printf("escriba el numero: \n");
scanf("%d", &n);
suma2=n;
if(n>10){
    while(n>10){
while(n>10){
m=n%10;
suma1=suma1+m;
n=n/10;
}
suma1=suma1+n;
printf("%d \n",suma1);
n=suma1;
suma1=0;
}
}else {
    printf("la raiz digital es %d \n",n);
}

    return 0;
}