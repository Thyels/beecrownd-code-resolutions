#include <stdio.h>

int main(){
	
	int number1, number2, sum=0, start=0, end=0;
	
	scanf("%d %d", &number1, &number2);
			fflush(stdin);
	
	start = (number1<number2) ? number1 : number2;
	end = (number2>number1)	? number2 : number1;	
	
	while(start<=end){
		if(start%13!=0){
			sum+=start;
		}
		start++;		
	}
	
	printf("%d\n", sum);
	
	return 0;
}
