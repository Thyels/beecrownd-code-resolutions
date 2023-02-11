#include <stdio.h>

int main(){

    double salario, imposto=0, percentual=0, excedente=0;

    scanf("%lf", &salario);

    if(salario <= 2000){
        printf("isento\n");
    }
    else{
        if(salario > 2000.00){
        percentual = salario-2000.00;
            if(percentual<=1000.00){
                imposto = percentual*0.08;
            }
            else{
                excedente = percentual-1000.00;
                imposto = 1000.00*0.08;
            }
        }

        if(excedente>0 && excedente<=1500.00){
            imposto = imposto+(excedente*0.18);
        }
        else{
            if(excedente>1500.00){
                excedente = excedente-1500.00;
                imposto = imposto+(1500.00*0.18);
            }
        }

        if(excedente>0 && salario>4500.00){
            imposto = imposto + (excedente*0.28);
        }

        printf("R$ %.2lf\n", imposto);
    }

    

    return 0;
}