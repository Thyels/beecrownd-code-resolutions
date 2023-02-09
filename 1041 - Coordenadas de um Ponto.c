/*
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. 
A seguir, determine qual o quadrante ao qual pertence o ponto, ou se est� sobre um dos eixos cartesianos ou na origem (x = y = 0).

Se o ponto estiver na origem, escreva a mensagem �Origem�.
Se o ponto estiver sobre um dos eixos escreva �Eixo X� ou �Eixo Y�, conforme for a situa��o.

A entrada contem as coordenadas de um ponto.
A sa�da deve apresentar o quadrante em que o ponto se encontra.
*/


#include <stdio.h>

int main(){
	
	double x, y;
	
	scanf("%lf %lf", &x, &y);
	
	if(x==0 && y==0){
		printf("Origem\n");
	}
	    if(x==0 && y!=0){
			printf("Eixo Y\n");
		}
		    if(x!=0 && y==0){
				printf("Eixo X\n");
			}
			    else {
					if(x>0 && y>0) printf("Q1\n");
		            	if(x<0 && y>0) printf("Q2\n");		            
			            	if(x<0 && y<0) printf("Q3\n");			            
				            	if(x>0 && y<0) printf("Q4\n");
				}
	
	return 0;
}
