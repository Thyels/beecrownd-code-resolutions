#include <stdio.h>

//primeira resolucao
/*
int main(){
	
	int  index;
	double note1, note2;
	
	for(index=1; index; index++){
		scanf("%lf", &note1);
		if(note1<0 || note1>10){
				printf("nota invalida\n");
			}
			else{				
				break;
			}
	}
	
	for(index=1; index; index++){
		scanf("%lf", &note2);
		if(note2<0 || note2>10){
				printf("nota invalida\n");
			}
			else{				
				break;
			}
	}
	
	printf("media = %.2lf", (note1+note2)/2);
	
	return 0;
}
*/

//Refatorando o codigo

int main(){
	
	int  index=0;
	double value, note[3];
	
	while(1){
		scanf("%lf", &value);
		if(value<0 || value>10){
				printf("nota invalida\n");
			}
			else{				
				note[index]=value;
				index++;
			}
			if(index>1){
				break;
			} 
	}
	
	printf("media = %.2lf", (note[0]+note[1])/2);
	
	return 0;
}
