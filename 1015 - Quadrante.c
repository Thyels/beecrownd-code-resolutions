#include <stdio.h>

int main(){
	
	int coordinateX, coordinateY, index;
	
	for(index=1; index; index++){
		scanf("%d %d", &coordinateX, &coordinateY);
			if(coordinateX==0 || coordinateY==0){
				break;
			}
			if(coordinateX>0 && coordinateY>0){
				printf("primeiro\n");
			}
			if(coordinateX<0 && coordinateY>0){
				printf("segundo\n");
			}if(coordinateX<0 && coordinateY<0){
				printf("terceiro\n");
			}
			if(coordinateX>0 && coordinateY<0){
				printf("quarto\n");
			}
	}
	
	
	
	return 0;
}
