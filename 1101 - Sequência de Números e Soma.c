#include <stdio.h>

int main(){
	
	int index=1, index2=1, number1, number2, transfer, sum=0;
	
	for(; index; index++){
		scanf("%d %d", &number1, &number2);
			if(number1<=0 || number2<=0){
				break;
			} 
			if(number1>number2){
				transfer=number1;
				number1=number2;
				number2=transfer;
			}
		for(index2=number1; index2<=number2; index2++){
			printf("%d ", index2);
			sum+=index2;
		}
		printf("Sum=%d\n", sum);
		sum=0;
	}
	
	return 0;
}
