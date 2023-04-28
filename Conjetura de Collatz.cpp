#include <stdio.h>

int main(){
    int n, cont = 0;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);
    do {    
        if (n%2==0){
            n=n/2;
        } else{
            n=n*3+1;
        }
        printf("| %d |\n", n);
        cont++;
    } while (n != 1);
    return 0;
}
