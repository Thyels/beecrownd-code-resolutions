#include <stdio.h>

int main(){
	
	double salario, novo_salario;
	
	scanf("%lf", &salario);
	
	if(salario>=0 && salario<=400.00){
		novo_salario = salario*1.15;
			printf("Novo salario: %.2lf\n", novo_salario);
				printf("Reajuste ganho: %.2lf\n", novo_salario-salario);
					printf("Em percentual: 15 %%\n");
	}
		if(salario>400.00 && salario<= 800.00){
			novo_salario = salario*1.12;
				printf("Novo salario: %.2lf\n", novo_salario);
					printf("Reajuste ganho: %.2lf\n", novo_salario-salario);
						printf("Em percentual: 12 %%\n");
		}
			if(salario>800.00 && salario<=1200.00){
				novo_salario = salario*1.10;
					printf("Novo salario: %.2lf\n", novo_salario);
						printf("Reajuste ganho: %.2lf\n", novo_salario-salario);
							printf("Em percentual: 10 %%\n");
			}
				if(salario>1200.00 && salario<=2000.00){
					novo_salario = salario*1.07;
						printf("Novo salario: %.2lf\n", novo_salario);
							printf("Reajuste ganho: %.2lf\n", novo_salario-salario);
								printf("Em percentual: 7 %%\n");
				}
					if(salario>2000.00){
						novo_salario = salario*1.04;
							printf("Novo salario: %.2lf\n", novo_salario);
								printf("Reajuste ganho: %.2lf\n", novo_salario-salario);
									printf("Em percentual: 4 %%\n");
					}
	
	return 0;
}
