#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int[],int);
void inserirValorVetor(int[],int);
void imprimeVetor(int[],int);
void preencherVetor(int[],int);
void bubbleSortDesc(int[],int);

int ins=9;


int main()
{
    int vetor[20]={92, 80, 71, 63, 55,41, 39, 27, 14};
    int n;
    int op;
    do{
        printf("###########################\n######### MENU ############\n###########################\n");
        printf("1-imprimir o vetor\n");
        printf("2-ordenar e imprimir vetor crescente\n");
        printf("3-ordenar e imprimir vetor decrescente\n");
        printf("0-sair\n");
        scanf("%i",&op);
        system("clear");
        switch(op){
            case 1: imprimeVetor(vetor,ins);
                    break;
            case 2: bubbleSort(vetor,ins);
                    imprimeVetor(vetor,ins);
                    break;
            case 0: printf("Saindo...");
                    break;
            case 3: bubbleSortDesc(vetor,ins);
                    imprimeVetor(vetor,ins);
                    break;
            default: op=-1;
                     printf("Selecione uma opção válida\n");
                     break;
        }
    }
    while (op!=0);
    return 0;
}




void bubbleSort(int v[],int n)
{
    int i, j;
    for(i = 1; i < n; i++)
        for(j = 0; j < n-i; j++)
            if( v[ j ]>v[ j+1 ] ) {
                int x = v[ j ];
                v[ j ] = v[ j+1 ];
                v[ j+1 ] = x;
            }
}
void bubbleSortDesc(int v[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
        for(j=0;j<n-1;j++)
            if( v[j]<v[j+1])
            {
                int x=v[j];
                v[j]=v[j+1];
                v[j+1]=x;
            }
}

void imprimeVetor(int x[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%i\n",x[i]);
    }
}
