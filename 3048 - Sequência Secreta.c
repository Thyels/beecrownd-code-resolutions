/*
Na cal�ada em frente ao Pal�cio Imperial, n�o se sabe a raz�o, existe uma sequ�ncia de N n�meros desenhados no ch�o. 
A sequ�ncia tem a seguinte forma: ela come�a e termina com o n�mero 1; apenas os n�meros 1 e 2 aparecem nela; e o n�mero 
2 aparece pelo menos uma vez. Veja um exemplo na coluna (a) da figura ao lado. Ningu�m sabe o significado da sequ�ncia e, 
justamente por isso, v�rias teorias malucas surgiram. Uma delas diz que a sequ�ncia representa, na verdade, apenas um valor 
que estaria relacionado a um segredo dos imperadores. Esse valor � a quantidade m�xima de n�meros da sequ�ncia que poderiam s
er marcados com um c�rculo, de modo que a sequ�ncia de n�meros marcados n�o contenha dois n�meros iguais consecutivos. 
A coluna (b) da figura ao lado ilustra uma sequ�ncia de 4 n�meros marcados que obedece a restri��o acima. S� que � poss�vel 
marcar 7 n�meros, como mostra a coluna (c) da figura.

Neste problema, dada a sequ�ncia original de n�meros desenhados no ch�o da cal�ada, seu programa deve computar e imprimir a 
quantidade m�xima de n�meros da sequ�ncia que poderiam ser marcados com um c�rculo sem que haja dois n�meros iguais consecutivos na sequ�ncia marcada.


Entrada:
A primeira linha da entrada cont�m um inteiro N representando o tamanho da sequ�ncia. As N linhas seguintes cont�m, cada uma, 
um inteiro Vi , para 1 =< i <= N, definindo a sequ�ncia de n�meros desenhados no ch�o da cal�ada imperial.

Sa�da:
Seu programa deve imprimir uma linha contendo um n�mero inteiro representando a quantidade m�xima de n�meros da sequ�ncia que 
poderiam ser marcados com um c�rculo sem que haja dois n�meros iguais consecutivos na sequ�ncia marcada.


Restri��es:
� 3 = N = 500
� Vi � igual a 1 ou 2, para 1 =< i <= N
*/

#include <stdio.h>

int main(){
	
	int vector[500];
	int size, index, index2, counter=1;
	
	scanf("%d", &size);
	
	for(index=1; index<=size; index++){
		scanf("%d", &vector[index]);
	}
	
	for(index=1; index<=size; index++){
		for(index2=index+1; index2<=size; index2++){
			if(vector[index]==1 || vector[index]==2 && vector[index]!=vector[index2]){
			counter++;
			}
		}
	}
	
	printf("%d\n", counter);
	
	return 0;
}
