/*
Leia 3 valores inteiros e ordene-os em ordem crescente. 
No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

A entrada contem três números inteiros.
*/

#include <stdio.h>

int main(){
	
	int a, b, c, d, e, f, passa;
		
	scanf("%d %d %d", &a, &b, &c);
	
	d = a, e = b, f = c;
	
	if(a>b){
		passa = a;
		a = b;
		b = passa;
	}
	
	if(a>c){
		passa = a;
		a = c;
		c = passa;
	}
	
	if(b>c){
		passa = b;
		b = c;
		c = passa;
	}
	
	printf("%d\n%d\n%d\n\n", a, b ,c);
	printf("%d\n%d\n%d\n", d, e, f);
	
	return 0;
}
