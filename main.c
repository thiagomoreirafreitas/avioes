#include <stdio.h>

struct aviao{
    char nome[50];
    int poltronas;
    char origem;
    char destino;
};
typedef struct aviao Aviao;
int main()
{
    int i;
    int quantidade = 0;
    
    printf("Digite quantos cadastros voce ira fazer: ");
    scanf("%d", &quantidade);
    Aviao avioes[quantidade]; 
    
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
    
    for(i=0; i<quantidade; i++)
    {
        printf("\nAviao %d\n",i);
        printf("Nome: %s\n", avioes[i].nome);
        printf("Numero de poltronas: %d\n", avioes[i].poltronas);
        printf("Origem: %c\n", avioes[i].origem);
        printf("Destino: %c\n", avioes[i].destino);
    }

    return 0;
}
