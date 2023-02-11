#include <stdio.h>

int main(){
    double number;
    int i=0, counter = 0;

    while(i<=5){
        scanf("%lf", &number);
            fflush(stdin);
        if(number>=1){
            counter++;
        }
        i++;
    }

    printf("%d valores positivos\n", counter);

    return 0;
}