#include <stdio.h>

int main(){
	
	int repetitions, number, index;
	
	scanf("%d", &repetitions);
	
	for(index=0; index<repetitions; index++){
		scanf("%d", &number);
			fflush(stdin);
				if(number%2==0 && number!=0){
					printf("EVEN ");
						if(number>0){
							printf("POSITIVE\n");
						}
						else{
							printf("NEGATIVE\n");
						}
				}
				if(number%2!=0 && number!=0){
					printf("ODD ");
						if(number>0){
							printf("POSITIVE\n");
						}
						else{
							printf("NEGATIVE\n");
						}
				}
				if(number==0){
					printf("NULL\n");
				}
	}
	
	return 0;
}
