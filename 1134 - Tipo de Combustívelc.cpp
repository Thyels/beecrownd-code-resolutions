#include <stdio.h>

int main(){
	
	int type, alcool=0, gasolina=0, diesel=0;
	
	do{
		scanf("%d", &type);
			fflush(stdin);
	
		switch(type){
			case 1:
				alcool++;
			break;
		
		case 2:
			gasolina++;
		break;
		
		case 3:
			diesel++;
		break;
		
		case 4:
			continue;
		break;
		
		default:
			continue;
		break;
		}
	}while(type!=4);
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
	
	return 0;
}
