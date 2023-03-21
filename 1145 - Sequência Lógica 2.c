#include <stdio.h>

int main(){
	
	int indexOne, indexTwo, counter=1, x, y;
	
	scanf("%d %d", &x, &y);
	
	for(indexOne=1; counter<=y; indexOne++){
		for(indexTwo=1; indexTwo<x; indexTwo++){
			printf("%d ", counter);
			counter++;
		}
		printf("%d\n", counter);
		counter++;
		indexTwo=1;
	}
	
	return 0;
}
