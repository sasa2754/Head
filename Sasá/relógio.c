#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <stdlib.h>

int horario() {
    time_t agora;
    struct tm *horario;

    // Obter o tempo atual
    agora = time(NULL);

    // Converter o tempo para o horário local
    horario = localtime(&agora);

    // Imprimir o horário atual
    printf("Horario atual: %02d:%02d:%02d\n", horario->tm_hour, horario->tm_min, horario->tm_sec);

    return 0;
}

int cronometro(){
    int hora = 0, minuto = 0, segundo = 0, qtdTempo = 0;
    printf("Ate quantos minutos voce quer contar?");
    scanf("%i", &qtdTempo);
    while (minuto<qtdTempo){
    segundo+=1;
    if(segundo==60){
        segundo = 0;
        minuto+=1;
    }
    else if(minuto==60){
        segundo = 0;
        minuto+=0;
        hora+=1;
    }
    printf("%02i:%02i:%02i\n", hora, minuto, segundo);
    // Sleep(800);
    Sleep(1000);
    system("CLS");
    }

    return 0;
}

int temporizador(){
    int hora = 0, minuto = 0, segundo = 30, qtdTempo = 0;
    printf("\nDigite quantos minutos voce quer temporizar: ");
    scanf("%i", &qtdTempo);

    minuto = qtdTempo;
    minuto -=1;
    while ((minuto>=0) & (segundo>=0)){
        segundo-=1;
        if(segundo==0){
            if((minuto==0) & (segundo==0)){
                break;
            }
            minuto-=1;
        }
        printf("%02i:%02i:%02i\n", hora, minuto, segundo);
        Sleep(1000);
        system("CLS");

    }
}
int main(){
    int escolha = 0;
    while(1){
        printf("Digite sua decisao:\n\t1 - Hora atual\n\t2 - Temporizador\n\t3 - Cronometro\n\t0 - Sair");
        scanf("%i", &escolha);
        switch (escolha){
        case 1:
            horario();
            break;
        case 2:
            temporizador();
            break;
        case 3:
            cronometro();
            break;
        case 0:
            printf("Tchau!");
            break;
        default:
        printf("Escolha um número válido!\n");
            break;
        }
        // horario();
        // cronometro();
        // temporizador();
        return 0;
    }
}
