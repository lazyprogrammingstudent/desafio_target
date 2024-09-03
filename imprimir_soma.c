#include <stdio.h>

int main (){
    int indice = 12;
    int soma = 0;
    int k = 1;

    while (k < indice){
        k +=1;
        soma +=k;
    }
    printf("soma = %d\n", soma);
}
