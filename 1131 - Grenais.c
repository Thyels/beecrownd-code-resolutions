#include <stdio.h>

int main(){
	
	int decision, gol1, gol2, empate=0, inter=0, gremio=0, grenais=0;
	
	while(1){
		while(1){
			scanf("%d %d", &gol1, &gol2);
			if(gol1>gol2){
				inter++;
			}
			if(gol1<gol2){
				gremio++;
			}
			else if(gol1==gol2){
				empate++;
			}
			grenais++;
			
			break;
		}
		
		while(1){
			printf("Novo grenal (1-sim 2-nao)\n");
				scanf("%d", &decision);
					fflush(stdin);
			if(decision==1 || decision==2){
				break;
			}
		}
		
		if(decision==1){
		 continue;
		}
		else{
			break;
		}
			
	}
	
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, inter, gremio, empate);
	
	if(inter>gremio){
		printf("Inter venceu mais\n");
	}
	if(inter<gremio){
		printf("Gremio venceu mais\n");
	}
	else if(inter==gremio){
		printf("Nao houve vencedor\n");
	}
	
	return 0;
}
