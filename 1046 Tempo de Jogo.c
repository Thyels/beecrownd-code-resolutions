/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a dura��o do jogo, sabendo que o mesmo pode come�ar em um dia e terminar em outro, 
tendo uma dura��o m�nima de 1 hora e m�xima de 24 horas.

A entrada cont�m dois valores inteiros representando a hora de in�cio e a hora de fim do jogo.
*/

#include <stdio.h>

int main(){
	
	int inicio, fim, tempo;
	
	scanf("%d %d", &inicio, &fim);
	
	if(fim>inicio){
		tempo = fim-inicio;
		printf("O JOGO DUROU %d HORA(S)\n", tempo);
	}else{
		fim = fim+24;
		tempo = fim - inicio;
		printf("O JOGO DUROU %d HORA(S)\n", tempo);
	}
}


