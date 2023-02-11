#include <stdio.h>

int main(){

	int velocidade, tempo;
	double distancia, litros;
	
	scanf("%d %d", &tempo, &velocidade);

	distancia = tempo*velocidade;
	litros = distancia/12;
	
	printf("%.3lf\n", litros);
	
	return 0;
}

