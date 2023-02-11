#include <stdio.h>

int main(){
	
	int ano=0, mes=0, dia=0;
	
	scanf("%d", &dia);
	
	while(dia >= 365){
		ano = ano+=1;
			dia = dia-= 365;
	}
	
	while(dia >= 30){
		mes = mes+=1;
			dia = dia-=30;
	}
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	
	return 0;
}
