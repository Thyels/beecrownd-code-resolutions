/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, 
tendo uma duração mínima de 1 hora e máxima de 24 horas.

A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.
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


