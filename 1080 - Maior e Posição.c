#include <stdio.h>

int main(){
	
	int value, highestValue=0, index=1, position;
	
	while(index<=5){
		scanf("%d", &value);
			fflush(stdin);
				if(value>highestValue){
					highestValue = value;
					position = index;
				}
	index++;
	}
	
	printf("%d\n%d\n", highestValue, position);
	
	return 0;
}
