#include <stdio.h>

int main(){
	
	int numberOfTests, counter=1, index=1;
	
	scanf("%d", &numberOfTests);
			fflush(stdin);
	
	while(index<=numberOfTests){		
		printf("%d %d %d PUM\n", counter, counter+1, counter+2);
		counter+=4;
		index++;
	}
	
	return 0;
}
