#include<stdio.h>
#include<stdlib.h>

int main(){

    int nota, i,totalPessoas;
    float percent, totalNotas = 0, porcentagem = 0;
    char cont;
    totalPessoas = 0;
    percent = 0;
    i = 1;
    while(i>0){
        printf("Uma pessoa vai votar agora? : [S/N]\n");
        scanf("%c",&cont);
        if(cont=='S' || cont=='s'){
            printf("Insira sua nota de avaliacao do governo municipal de 0 a 5 \n ================================================================================================\n");
            printf("[0 = Muito Ruim/ 1 = Ruim / 2 = Ruim para mediano / 3 = Mediano para bom / 4 = Bom / 5 = Muito bom]: \n");
            scanf("%d", &nota);
            totalPessoas = totalPessoas + 1;
            i++;
            if(nota==4 || nota==5){
                percent++;
            }
            if(nota>=1 && nota <=5){
                totalNotas++;
            }
        }
        if(cont=='N' || cont=='n'){
            break;
        }
    }
    porcentagem = (percent/totalNotas)*100;
    totalPessoas = totalPessoas;
    printf("%d pessoas responderam a pesquisa: \n", totalPessoas);
    printf("A pocentagem das notas classificando o governo como 'bom' ou 'muito bom' foram %.2f porcento", porcentagem);

    return 0;
}