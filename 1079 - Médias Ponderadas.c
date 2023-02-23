#include <stdio.h>

int main(){
	
	int index=1, repetitions;
	double number1, number2, number3, weightedAverage;
	
	scanf("%d", &repetitions);
	
	while(index<=repetitions){
		scanf("%lf %lf %lf", &number1, &number2, &number3);
		weightedAverage = (((number1*2)+(number2*3)+(number3*5))/(2+3+5));
		printf("%.1lf\n", weightedAverage);
	index++;
	}
	
	return 0;
}
