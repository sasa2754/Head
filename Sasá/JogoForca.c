#include <stdio.h>
#include <string.h>

char letra;
char palavra[9] = "elefante";
char palavraMetade[9] =  "________";
int tentativas = 6, contador = 0;

char *pegarLetra(){
    printf("\nDigite uma letra: ");
    fflush(stdin);
    scanf("%c", &letra);
    fflush(stdin);
    for (int i=0;i<8;i++){
        if(letra==palavra[i]){
            palavraMetade[i] = letra;
            contador += 1;
        }
    }
    // printf("\n%s", palavraMetade);
}


int main(){

    while (1){
        pegarLetra();
        printf("%s\n", palavraMetade);
        if (!strcmp(palavra, palavraMetade)){
            printf("Certo!");
            break;
        }

    }
}