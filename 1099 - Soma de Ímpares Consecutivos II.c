#include <stdio.h>

int main(){
	
	int numberOfTests, index, number1, number2, number, sumOdd, startOfBreak, endOfBreak;
	
	scanf("%d", &numberOfTests);
		fflush(stdin);
	
	for(index=0; index<numberOfTests; index++){
		scanf("%d %d", &number1, &number2);
			fflush(stdin);	
		sumOdd = 0;
		startOfBreak = (number1<number2) ? number1 : number2;
		endOfBreak = (number2>number1) ? number2 : number1;
		number = (startOfBreak%2==0) ? startOfBreak+1: startOfBreak+2;
		
		for(; number<endOfBreak; number+=2)
			sumOdd+=number;
		printf("%d\n", sumOdd);
	}
	
	return 0;
}
