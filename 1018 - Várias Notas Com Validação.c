#include <stdio.h>

int main(){
	
	int  index, decision=0;
	double value, note[3];
	
	while(1){
		index = 0;
		while(1){
			scanf("%lf", &value);
			if(value>=0 && value<=10){
				note[index]=value;
				index++;
			}
			else{				
				printf("nota invalida\n");	
			}
			if(index>1){
				break;
			}
		}
		
		printf("media = %.2lf\n", (note[0]+note[1])/2);
		
		while(1){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &decision);
			if(decision==1 || decision==2){
				break;
			}
		}
		
		if(decision==1){
			continue;
		}
		else{
			break;
		} 
	}
	
	return 0;
}
