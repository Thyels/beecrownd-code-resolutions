/*
Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. 
Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ". 
Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". 
Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".

No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. 
Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada. 
Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2). e imprima a mensagem "Aluno aprovado." 
(caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). 
Para estes dois casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma mensagem "Media final: " 
seguido da média final para esse aluno.
*/

#include <stdio.h>

int main(){
	
	double N1, N2, N3, N4, media, notaExame, recuperacao;
	
	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
	
	media = ((N1*2+N2*3+N3*4+N4*1) / 10);
	
	printf("Media: %.1lf\n", media);
	
	if(media>=7.0){
		printf("Aluno aprovado.\n");
	}
		if(media<7.0 && media>=5.0){
			printf("Aluno em exame.\n");
				scanf("%lf", &notaExame);]
					printf("Nota do exame: %.1lf\n", notaExame);
						recuperacao = (media+notaExame)/2;
							if(recuperacao>=5.0){
								printf("Aluno aprovado.\n");
							}else{
								printf("Aluno reprovado.\n");
							}
									printf("Media final: %.1lf\n", recuperacao);
		}
			if(media<5.0){
			printf("Aluno reprovado.\n");
		}
		
	return 0;
	
}
