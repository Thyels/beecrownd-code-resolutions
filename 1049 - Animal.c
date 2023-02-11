#include <stdio.h>
#include <string.h>

int main(){

    char filo[15], classe[15], alimentacao[15];

    scanf("%s %s %s", filo, classe, alimentacao);

    if(filo[0]=='v'){ //vertebrado
        if(classe[0]=='a'){ //ave
            if(alimentacao[0]=='c'){ //carnivoro
                printf("aguia\n");
            }
            else{ //onivoro
                printf("pomba\n");
            }
        }
        else{ //mamifero
            if(alimentacao[0]=='o'){ //onivoro
                printf("homem\n");
            }
            else{ //herbivoro
                printf("vaca\n");
            }
        }
    }
    else{ //invertebrado
        if(classe[0]=='i'){ //inseto
            if (alimentacao[2]=='m'){ //hematofago
                printf("pulga\n");
            }
            else{ //herbivoro
                printf("lagarta\n");
            }
            
        }
        else{ //anelideo
            if (alimentacao[0]=='h'){ //hematofago
                printf("sanguessuga\n");
            }
            else{ //onivoro
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}