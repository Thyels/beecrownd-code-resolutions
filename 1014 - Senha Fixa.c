#include <stdio.h>

int main(){
	
	int password, index;
	
	for(index=1; index; index++){
		scanf("%d", &password);
			if(password==2002){
				printf("Acesso Permitido\n");
				break;
			}
			if(password!=2002){
				printf("Senha Invalida\n");
			}
	}
	
	
	
	return 0;
}
