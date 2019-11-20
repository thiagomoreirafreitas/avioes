#include <stdio.h>

struct aviao{
    char nome[50];
    int poltronas;
    char origem;
    char destino;
};
typedef struct aviao Aviao;

void lerDados(int quantidade, Aviao avioes[]){
    int i;
    for(i=0; i<quantidade; i++)
    {
        printf("\nAviao %d\n",i);
        printf("Digite nome: ");
        scanf(" %[^\n]s",&avioes[i].nome);
        printf("Digite o numero de poltronas: ");
        scanf(" %d", &avioes[i].poltronas);
        printf("Digite origem: ");
        scanf(" %c", &avioes[i].origem);
        printf("Digite destino: ");
        scanf(" %c", &avioes[i].destino);
    }
}

void imprimeDados(int quantidade, Aviao avioes[]){
    int i;
    printf("\nDADOS\n");
    for(i=0; i<quantidade; i++)
    {
        printf("\nAviao %d\n",i);
        printf("Nome: %s\n", avioes[i].nome);
        printf("Numero de poltronas: %d\n", avioes[i].poltronas);
        printf("Origem: %c\n", avioes[i].origem);
        printf("Destino: %c\n", avioes[i].destino);
    }
}

int main()
{
    int quantidade = 0;
    printf("Digite quantos cadastros voce ira fazer: ");
    scanf("%d", &quantidade);
    Aviao avioes[quantidade]; 
    lerDados(quantidade, avioes);
    imprimeDados(quantidade, avioes);
    return 0;
}
