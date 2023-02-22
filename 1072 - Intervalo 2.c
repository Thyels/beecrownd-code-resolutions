#include <stdio.h>

int main(){

   int size, value, index=1, counterIn=0, counterOut=0;
   
   scanf("%d", &size);
   
   while(index<=size){
   	scanf("%d", &value);
   		if(value>=10 && value<=20){
   			counterIn++;
		   }
		   	else{
		   		counterOut++;
			   }
	index++;
   }
   
   printf("%d in\n%d out\n", counterIn, counterOut);
    
    return 0;

}
