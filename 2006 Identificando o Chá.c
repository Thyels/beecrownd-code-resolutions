/*
Degusta��o de ch� �s escuras � a habilidade de identificar um ch� usando apenas seus sentidos do olfato e paladar.

Isto faz parte da Competi��o Ideal de Consumidores de Ch� Puro (da sigla em ingl�s ICPC), que um programa de TV local est� organizando. Durante o show, 
um bule de ch� completo � preparado e s�o entregues uma x�cara de ch� para cada um dos cinco competidores. Os participantes devem cheirar, saborear e avaliar 
a amostra, de modo a identificar o tipo de ch�, que pode ser: (1) o ch� branco; (2) ch� verde; (3) ch� preto; ou (4) ch� de ervas. No final, as respostas s�o 
verificadas para determinar o n�mero de suposi��es corretas.

Dado o tipo de ch� real e as respostas fornecidas, determinar o n�mero de participantes que receberam a resposta correta.

Entrada
A primeira linha cont�m um inteiro T representando o tipo de ch� (1 =< T =< 4). A segunda linha cont�m cinco inteiros A, B, C, D e E, que indica a resposta dada 
por cada competidor (1 =< A, B, C, D, E =< 4).

Sa�da
A sa�da cont�m um inteiro representando o n�mero de concorrentes que obtiveram a resposta correta.
*/


#include <stdio.h>

int main(){
	
	int T, A, B, C, D, E, i=0;
	
	scanf("%d %d %d %d %d %d", &T, &A, &B, &C, &D, &E);
	
	if(T==A){
		i=i+1;
	}
	if(T==B){
		i=i+1;
	}
	if(T==C){
		i=i+1;
	}
	if(T==D){
		i=i+1;
	}
	if(T==E){
		i=i+1;
	}
	
	printf("%d\n", i);
	
}
