//dominando vetores !!!
#include <stdio.h>
#define SIZE 1000

void printvect(int v[]){
    int j;
    for(j=0; j<5; j++){

        printf("%d ",v[j]);
    }
    printf("\n");
}

void somavetores(int v[]){

    int i, soma=0;

    for(i=0;i<5;i++){

        soma = soma + v[i];
    }
    printf("Valor total: %d\n",soma);
}
int main(){

    int * v[5] = {5, 10, 15 , 20, 25 };
    
    printvect(v[5]);
    somavetores(v[5]);
    printf("\n");

    return 0; 

}
