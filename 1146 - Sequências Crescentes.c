#include <stdio.h>

int main(){
	
	int index, counter=1, x;
	
	while(1){
		scanf("%d", &x);
			if(x==0){
				break;
			}
			else{
				for(index=1; counter<x; index++){
					printf("%d ", counter);
					counter++;
				}
				printf("%d\n", counter);
				index=1;
			}
		counter=1;
	}
		
	return 0;
}
