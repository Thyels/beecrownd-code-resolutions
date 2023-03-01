#include <stdio.h>

int main(){

    int i=0, j=1;
    double x=0.2, y=1.2;

    printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", i, j, i, (j+1), i, (j+2));

    while(x<=0.8){
        printf("I=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\n", x, y, x, (y+1), x, (y+2));
        x = x+0.2;
        y = y+0.2;
    }
    
    printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", i+1, j+1, i+1, j+2, i+1, j+3);
    
    x = 1.2;
    y = 2.2;
    
    while(x<=1.8){
        printf("I=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\n", x, y, x, (y+1), x, (y+2));
        x = x+0.2;
        y = y+0.2;
    }
    
    printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", i+2, j+2, i+2, j+3, i+2, j+4);

    return 0;
}
