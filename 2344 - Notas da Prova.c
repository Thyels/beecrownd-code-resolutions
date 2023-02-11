#include <stdio.h>

int main(){
	
	int nota;
	
	scanf("%d", &nota);
	
	if(nota>=86 && nota<=100){
		puts("A\n");
	}
		if(nota>=61 && nota<=85){
			puts("B\n");
		}
			if(nota>=36 && nota<=60){
				puts("C\n");
			}
				if(nota>=1 && nota<=35){
					puts("D\n");
				}
					if(nota==0){
						puts("E\n");
					}
	
	return 0;
}
