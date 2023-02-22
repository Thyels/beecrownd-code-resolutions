#include <stdio.h>
#include <math.h>

int main(){

   int value, index=1, result;
   
   scanf("%d", &value);
   
   while(index<=value){
   		if(index%2==0){
   			result = pow(index,2);
   				printf("%d^2 = %d\n", index, result);
		   }
	index++;
   }
    
    return 0;

}
