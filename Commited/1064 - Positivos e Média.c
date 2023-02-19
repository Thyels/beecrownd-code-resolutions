#include <stdio.h>

int main(){

    double value, index=1, counter=0, total=0;

    while(index<=6){
        scanf("%lf", &value);
            fflush(stdin);
                if(value>0){
                    total = total+value;
                    counter++;
                }
    index++;
	}
    total = total/counter;

    printf("%.0lf valores positivos\n%.1lf\n", counter, total);

    return 0;
}
