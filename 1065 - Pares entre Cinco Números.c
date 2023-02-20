#include <stdio.h>

int main(){

    int value, index=1, counter=0;

    while(index<=5){
        scanf("%d", &value);
            fflush(stdin);
                if(value%2==0){
                    counter++;
                }
        index++;
    }

    printf("%d valores pares\n", counter);
    
    return 0;
}