#include <stdio.h>

/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. 
A seguir, calcule e mostre o valor da conta a pagar.

CÓDIGO		ESPECIFICAÇÃO		PREÇO			
1			Cachorro Quente		R$ 4.00
2			X-Salada			R$ 4.50
3			X-Bacon				R$ 5.00
4			Torrada Simples		R$ 2.00
5			Refrigerante		R$ 1.50
*/

int main(){
	
	int cod, qtd;
	double valor=0, cq=4.00, xs=4.50, xb=5.00, ts=2.00, rf=1.50;
	
	scanf("%d %d", &cod, &qtd);
	
	switch(cod){
		case 1:
			valor = cq*qtd;
				printf("Total: R$ %.2lf\n", valor);
					break;
	
		case 2:
			valor = xs*qtd;
				printf("Total: R$ %.2lf\n", valor);
					break;
		
		case 3:
				valor = xb*qtd;
					printf("Total: R$ %.2lf\n", valor);
						break;
					
		case 4:
			valor = ts*qtd;
				printf("Total: R$ %.2lf\n", valor);
					break;
		
		case 5:
			valor = rf*qtd;
				printf("Total: R$ %.2lf\n", valor);
					break;
				
		default:						
			printf("Codigo do produto eh invalido!\n");
				break;
	}
	
	return 0;	
}
