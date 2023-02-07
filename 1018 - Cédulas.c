#include <stdio.h>

int main(){
	
	int valor, resto, n100, n50, n20, n10, n5, n2, n1;
		
	scanf("%d", &valor);
		printf("%d\n", valor);
	
	if(valor >= 100){
		n100 = valor / 100;
			resto = valor % 100;
	}else{
		resto = valor;
			n100 = 0;
	}
	
	printf("%d nota(s) de R$ 100,00\n", n100);
	
	if(resto >= 50){
		n50 = resto / 50;
			resto = resto % 50;			
	}else{
		n50 = 0;
	}
	
	printf("%d nota(s) de R$ 50,00\n", n50);
			
	if(resto >= 20){
		n20 = resto / 20;
			resto = resto % 20;			
	}else{
		n20 = 0;
	}
	
	printf("%d nota(s) de R$ 20,00\n", n20);
	
	if(resto >= 10){
		n10 = resto / 10;
			resto = resto % 10;			
	}else{
		n10 = 0;
	}
	
	printf("%d nota(s) de R$ 10,00\n", n10);
	
	if(resto >= 5){
		n5 = resto / 5;
			resto = resto % 5;			
	}else{
		n5 = 0;
	}
	
	printf("%d nota(s) de R$ 5,00\n", n5);
	
	if(resto >= 2){
		n2 = resto / 2;
			resto = resto % 2;			
	}else{
		n2 = 0;
	}
	
	printf("%d nota(s) de R$ 2,00\n", n2);
	
	if(resto >= 1){
		n1 = resto / 1;
			resto = resto % 1;			
	}else{
		n1 = 0;
	}
	
	printf("%d nota(s) de R$ 1,00\n", n1);
	
	return 0;
}
