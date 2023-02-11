#include <stdio.h>

int main(){

    int hora_inicial, hora_final, min_inicial, min_final, tempo;

    scanf("%d %d %d %d", &hora_inicial, &min_inicial, &hora_final, &min_final);

    tempo = ((hora_final*60)+min_final) - ((hora_inicial*60)+min_inicial);

    if(tempo<=0){
        tempo = tempo + 1440;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo/60, tempo%60);

    return 0;
}