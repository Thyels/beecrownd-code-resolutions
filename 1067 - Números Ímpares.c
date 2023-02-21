#include <stdio.h>

int main(){

    int number, index=1;

    scanf("%d", &number);
        fflush(stdin);

    while(index<=number){
        if(index%2!=0){
            printf("%d\n", index);
        }
        index++;
    }

    return 0;
}