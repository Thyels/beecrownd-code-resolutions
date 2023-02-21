#include <stdio.h>

int main(){

    int number, counter=0;

    scanf("%d", &number);
        fflush(stdin);

    while(counter<6){
        if(number%2!=0){
            printf("%d\n", number);
            	counter++;
        }
        number++;
    }

    return 0;
}
