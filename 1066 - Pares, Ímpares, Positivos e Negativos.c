#include <stdio.h>

int main(){

    int value, index=1, even=0, odd=0, negative=0, positive=0;

    while(index<=5){
        scanf("%d", &value);
            fflush(stdin);
                if(value%2==0){
                    even++;
                }
                    if(value%2!=0){
                        odd++;
                    }
                        if(value>0){
                            positive++;
                        }
                            if(value<0){
                                negative++;
                            }
        index++;
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);
    
    return 0;
}