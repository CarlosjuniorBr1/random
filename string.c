#include <stdio.h>
#include <string.h>
#define N 50

int main(){

    char hardtext[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    scanf("%49[^\n]s",senha_usr);
    ok = strcmp(hardtext, senha_usr);
    if(ok == 0) printf("Textos iguais\n");
    else printf("Textos Diferentes\n");



   // printf("Primeira versao:\n ");    
   // scanf("%s", s);
    //fflush(stdin);
   // printf("%s\n",s);

    

    //printf("Segunda Versao:\n");
   // scanf("%19[^\n]s",v);
  // fflush(stdin);
   // printf("%s\n",v);
    

    
    return 0;
}
