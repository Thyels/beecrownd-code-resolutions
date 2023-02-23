#include <stdio.h>

int main(){
	
	int number, index=1;
	
	scanf("%d", &number);
	
	while(index<=10){
		printf("%d x %d = %d\n", index, number, (index*number));
	index++;
	}
	
	return 0;
}
