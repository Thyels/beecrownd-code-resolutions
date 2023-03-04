#include <stdio.h>

int main(){
	
	int index, number1, number2;
	
	for(index=1; index; index++){
		scanf("%d %d", &number1, &number2);
			if(number1==number2){
				break;
			} 
			if(number1<number2){
				printf("Crescente\n");
			}
			else{
				printf("Decrescente\n");
			}
	}
	
	return 0;
}
