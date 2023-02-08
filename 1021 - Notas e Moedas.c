#include <stdio.h>

/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguir mostre a relação de notas necessárias.
*/

int main(){
	
	double valor, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01;
		valor = n100 = n50 = n20 = n10 = n5 = n2 = m1 = m50 = m25 = m10 = m5 = m1 = 0;
		
	scanf("%lf", &valor);
		printf("NOTAS:\n");
	
	while(valor >= 100){
		n100 = n100+=1;
			valor = valor-=100;
	}
	
	printf("%.0lf nota(s) de R$ 100.00\n", n100);
	
	while(valor >= 50){
		n50 = n50+=1;
			valor = valor-=50;
	}
	
	printf("%.0lf nota(s) de R$ 50.00\n", n50);
	
	while(valor >= 20){
		n20 = n20+=1;
			valor = valor-=20;
	}
	
	printf("%.0lf nota(s) de R$ 20.00\n", n20);
	
	while(valor >= 10){
		n10 = n10+=1;
			valor = valor-=10;
	}
	
	printf("%.0lf nota(s) de R$ 10.00\n", n10);
	
	while(valor >= 5){
		n5 = n5+=1;
			valor = valor-=5;
	}
	
	printf("%.0lf nota(s) de R$ 5.00\n", n5);
	
	while(valor >= 2){
		n2 = n2+=1;
			valor = valor-=2;
	}
	
	printf("%.0lf nota(s) de R$ 2.00\n", n2);
	
	printf("MOEDAS:\n");
		valor = valor*100;
	
	while(valor >= 100){
		m1 = m1+=1;
			valor = valor-=100;
	}
	
	printf("%.0lf moeda(s) de R$ 1.00\n", m1);
	
	while(valor >= 50){
		m50 = m50+=1;
			valor = valor-=50;
	}
	
	printf("%.0lf moeda(s) de R$ 0.50\n", m50);
	
	while(valor >= 25){
		m25 = m25+=1;
			valor = valor-=25;
	}
	
	printf("%.0lf moeda(s) de R$ 0.25\n", m25);
	
	while(valor >= 10){
		m10 = m10+=1;
			valor = valor-=10;
	}
	
	printf("%.0lf moeda(s) de R$ 0.10\n", m10);
	
	while(valor >= 5){
		m5 = m5+=1;
			valor = valor-=5;
	}
	
	printf("%.0lf moeda(s) de R$ 0.05\n", m5);
	
	while(valor >= 1){
		m01 = m01+=1;
			valor = valor-=1;
	}
	
	printf("%.0lf moeda(s) de R$ 0.01\n", m01);
	
	return 0;	
}
