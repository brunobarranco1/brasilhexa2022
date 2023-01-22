/*
 * Arquivo: txtFibonacci.c
 * Autor: Bruno Barranco 12121EEL025
 */

#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main(void){
    int *v, n;
    FILE *pont_arq;
    
    pont_arq = fopen("fibonacci.txt", "w");
    printf("quantidade de elementos de v:\n");
    scanf("%d%*c", &n);

    v = malloc (n * sizeof (int));

    for (int i =0; i<n;i++){
        v[i] = fib(i);
        fprintf(pont_arq, "%d\n", v[i]);
    }

    fclose(pont_arq);
    free(v);
    return 0;
}

int fib(int n){

    if(n == 0){
        return 1;
    }else if(n == 1){
        return 1;
    }
    return fib(n-1) + fib(n-2); 
}
