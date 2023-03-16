#include <stdio.h>
#include <math.h>

int main(){
	
	int numberOfTests, index=1;
	
	scanf("%d", &numberOfTests);
		fflush(stdin);
		
	while(index<=numberOfTests){
		printf("%d %.0lf %.0lf\n", index, pow(index,2), pow(index,3));
		index++;
	}
	
	return 0;
}
