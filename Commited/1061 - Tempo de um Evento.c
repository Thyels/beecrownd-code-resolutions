#include <stdio.h>

int main(){
    
int diaInicial, diaFinal, horaInicial, horaFinal,  minutoInicial, minutoFinal, segundoInicial, segundoFinal;
int totalInicial, totalFinal, tempo;

scanf("%*s %d", &diaInicial);
scanf("%d %*c %d %*c %d", &horaInicial, &minutoInicial, &segundoInicial);
scanf("%*s %d", &diaFinal);
scanf("%d %*c %d %*c %d", &horaFinal, &minutoFinal, &segundoFinal);

diaInicial = (diaInicial*86400);
horaInicial = (horaInicial*3600);
minutoInicial = (minutoInicial*60);
totalInicial = (diaInicial+horaInicial+minutoInicial+segundoInicial);

diaFinal = (diaFinal*86400);
horaFinal = (horaFinal*3600);
minutoFinal = (minutoFinal*60);
totalFinal = (diaFinal+horaFinal+minutoFinal+segundoFinal);

tempo = totalFinal-totalInicial;

printf("%d dia(s)\n", tempo/(60*60*24)); tempo = tempo%(60*60*24);
printf("%d hora(s)\n", tempo/(60*60)); tempo = tempo%(60*60);
printf("%d minuto(s)\n", tempo/(60)); tempo = tempo%(60);
printf("%d segundo(s)\n", tempo);

return 0;
}