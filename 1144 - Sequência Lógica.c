#include <stdio.h>

int main(){
	
	int numberOfTests, index; 
	
	scanf("%d", &numberOfTests);
	
	for(index=1; index<=numberOfTests; index++){
		printf("%d %d %d\n", index, index*index, index*index*index);
		printf("%d %d %d\n", index, index*index+1, index*index*index+1);
	}
	
	return 0;
}
