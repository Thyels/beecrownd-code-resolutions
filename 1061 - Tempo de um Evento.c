#include <stdio.h>

int main(){
    
int diaInicial, diaFinal, horaInicial, horaFinal,  minutoInicial, minutoFinal, segundoInicial, segundoFinal;
int totalInicial, totalFinal, tempo, dia, hora, minuto, segundo;

scanf("%*s %d", &diaInicial);
scanf("%d %*c %d %*c %d", &horaInicial, &minutoInicial, &segundoInicial);
scanf("%*s %d", &diaFinal);
scanf("%d %*c %d %*c %d", &horaFinal, &minutoFinal, &segundoFinal);

diaInicial = diaInicial*86400;
horaInicial = horaInicial*3600;
minutoInicial = minutoInicial*60;
totalInicial = diaInicial+horaInicial+minutoInicial+segundoInicial;

diaFinal = diaFinal*86400;
horaFinal = horaFinal*3600;
minutoFinal = minutoFinal*60;
totalFinal = diaFinal+horaFinal+minutoFinal+segundoFinal;

tempo = totalFinal-totalInicial;

dia = tempo/86400;
tempo = ((tempo/86400)-dia)*86400;
hora = tempo/3600;
tempo = ((tempo/3600)-hora)*3600;
minuto = tempo/60;
tempo = ((tempo/60)-minuto)*60;
segundo = tempo;

printf("%d dia(s)\n", dia);
printf("%d hora(s)\n", hora);
printf("%d minuto(s)\n", minuto);
printf("%d segundo(s)\n", segundo);

return 0;
}