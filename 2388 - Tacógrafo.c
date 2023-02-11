/*
Tac�grafos s�o dispositivos instalados em determinados tipos de ve�culos, que registram a velocidade, tempo e dist�ncia percorrida por tal ve�culo. 
� utilizada principalmente em ve�culos de transporte coletivo e de transporte de cargas, assim ajudando a evitar abusos de velocidade por parte dos motoristas.

A empresa SBC (Sociedade Brasileira dos Caminhoneiros) decidiu encomendar uma vers�o um pouco mais b�sica (e barata) para seus associados n�o precisarem gastar 
tanto na instala��o desses aparelhos. Essas vers�es modificadas registram apenas os intervalos de tempo e as velocidades m�dias do caminh�o naqueles intervalos.

Apesar das restri��es dos aparelhos novos, a SBC quer poder saber qual foi a dist�ncia percorrida pelos caminh�es. Voc� dever� escrever um programa que recebe 
uma s�rie de intervalos de tempo com suas respectivas velocidades m�dias e calcula qual foi a dist�ncia total percorrida pelo caminh�o de acordo com o tac�grafo.

Entrada
A primeira linha da entrada cont�m um inteiro N (1 =< N <= 1000) representando a quantidade de intervalos de tempo registrados no tac�grafo. As N linhas seguintes 
descrevem os intervalos de tempo. Cada uma dessas linhas possui dois inteiros T e V (1 =< T <= 100, 0 =< V <= 120), que representam, respectivamente o tempo 
decorrido (em horas) e a velocidade m�dia (em quil�metros por hora) no intervalo de tempo.

Sa�da
Seu programa deve imprimir uma �nica linha, contendo um �nico n�mero inteiro representando a dist�ncia total percorrida, em quil�metros.
*/

#include <stdio.h>

struct tipo_intervalo{
	int tempo;
	int velocidade_media;
};

typedef struct tipo_intervalo tipo_intervalo;

int main(){
	
	int quantidade, i, total=0;
	tipo_intervalo inter = {0,0};
	
	scanf("%d", &quantidade);
	
	for(i=0; i<quantidade; i++){
		scanf("%d %d", &inter.tempo, &inter.velocidade_media);
		total = total+(inter.tempo*inter.velocidade_media);
	}
	
	printf("%d\n", total);	
	
	return 0;
}
