/*
 * somavetores.c
 * Bruno Barranco 12121EEL025
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool soma(int * v, int n1, int * u, int n2, int * r);

int main(int argc, char** argv){
	
    int *v,*u, *r, n1,n2;
    bool b;

    printf("tamanho de v:\n");
    scanf("%d%*c", &n1);
    
    printf("tamanho de u:\n");
    scanf("%d%*c", &n2);

    v = malloc (n1 * sizeof (int ));
    u = malloc (n2 * sizeof (int ));

    r = malloc (n1 * sizeof (int ));

    v[0] = 1;
    
    u[0] = 0;
    
    for(int i =1; i< n1; i++){
        v[i] =  v[i-1] +2 ;
        u[i] =  u[i-1] +4 ;
    }
    
    b = soma (v, n1, u, n2, r);

    if(b){
        printf("True\n");
    }else{
        printf("False\n");
    }
    free(v);
    free(u);
    free(r);
	return 0;
}

bool soma(int * v, int n1, int * u, int n2, int * r){
    int s1 = 0;
    if (n1!=n2){
        return false;
    }    

    for(int i =0; i< n1; i++){
        r[i] =  v[i] + u[i];
    }
    return r;
}

