#include <stdio.h>
#define N 1000

int main(){

    int v[N];
    int n, i, j; 
    double soma=0;
    scanf("%d",&n);
    for(i=0; i < n; i++){ 
        scanf("%d",&v[i]);

    }
    for(j = 0; j < n; j++){

        soma = soma + v[j];
    }
    
    double media = soma / n;
    printf("%.2lf é sua media\n",media);


    return 0;
}