#include <stdio.h>

int main(){
	
	int number1, number2, start=0, end=0;
	
	scanf("%d %d", &number1, &number2);
			fflush(stdin);
	
	start = (number1<number2) ? number1 : number2;
	start++;
	end = (number2>number1)	? number2 : number1;	
	
	while(start<end){		
		if(start%5==2 || start%5==3){
			printf("%d\n", start);
		}
		start++;		
	}
	
	
	
	return 0;
}
