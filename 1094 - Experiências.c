#include <stdio.h>

int main(){
	
	int amount, numberOfTests=0, index=1, percentage, rabbit=0, mouse=0, frog=0;
	char animal;
	
	scanf("%d", &numberOfTests);
	
	while(index<=numberOfTests){
		scanf("%d %c", &amount, &animal);
			fflush(stdin);
				if(animal=='C'){
					rabbit += amount;					
				}
					if(animal=='R'){
						mouse+=amount;						
					}
						else if(animal=='S'){
							frog+=amount;							
						}
		index++;
	}
	
	printf("Total: %d cobaias\n", (rabbit+mouse+frog));
	printf("Total de coelhos: %d\n", rabbit);
	printf("Total de ratos: %d\n", mouse);
	printf("Total de sapos: %d\n", frog);
	printf("Percentual de coelhos: %.2lf %%\n", (((rabbit*100)/(double)((rabbit+mouse+(frog))))));
	printf("Percentual de ratos: %.2lf %%\n", (((mouse*100)/(double)((rabbit+mouse+(frog))))));
	printf("Percentual de sapos: %.2lf %%\n", (((frog*100)/(double)((rabbit+mouse+(frog))))));
	
	return 0;
}
