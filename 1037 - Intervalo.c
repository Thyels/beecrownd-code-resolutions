#include <stdio.h>

/*
Voc� deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos 
([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor n�o estiver em nenhum destes intervalos, 
dever� ser impressa a mensagem �Fora de intervalo�.

O s�mbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 at� o valor 50.0000000
*/

int main(){
	
	double valor;
	
	scanf("%lf", &valor);
	
	if(valor>=0 && valor<=25){
		printf("Intervalo [0,25]\n");
	}
		if(valor>25 && valor<=50){
			printf("Intervalo (25,50]\n");
		}
			if(valor>50 && valor<=75){
				printf("Intervalo (50,75]\n");
			}
				if(valor>75 && valor<=100){
					printf("Intervalo (75,100]\n");
				}
					if(!(valor>=0 && valor<=100)){
						printf("Fora de intervalo\n");
					}
	
	return 0;
}
