#include <stdio.h>

int sum (int value1, int value2){
	int result=0, index;
	
	if(value1 < value2){
		for(index=value1+1; index<value2; index++)
			if(index%2!=0){
				result+=index;
			}
	}
		else{
			for(index=value2+1; index<value1; index++)
				if(index%2!=0){
					result+=index;
				}
		}
	return result;
}

int main(){

    int value1, value2;
    
    scanf("%d %d", &value1, &value2);
    
    printf("%d\n", sum(value1, value2));
    
    return 0;

}
