#include <stdio.h>
#include <math.h>

/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
caso haja uma divisão por 0 ou raiz de numero negativo.
*/

int main(){
	
	double A, B, C, x1, x2;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A==0 || (pow(B,2)-(4*A*C))<0){
		printf("Impossivel calcular\n");
	}else{
		x1 = (-B+sqrt(pow(B,2)-(4*A*C)))/(2*A);
			printf("R1 = %.5lf\n", x1);
			
		x2 = (-B-sqrt(pow(B,2)-(4*A*C)))/(2*A);
			printf("R2 = %.5lf\n", x2);
	}
	
	return 0;
}
