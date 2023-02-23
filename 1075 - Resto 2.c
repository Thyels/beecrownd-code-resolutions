#include <stdio.h>

int main(){
	
	int number, index=1;
	
	scanf("%d", &number);
	
	while(index<=10000){
		if(index%number==2){
			printf("%d\n", index);
		}
	index++;
	}
	
	return 0;
}
