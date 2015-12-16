#include <stdio.h>
#include <stdlib.h>
int ins=0;

void insertSort(int x[],int n){
    int i,k,y;
    for(k=1;k<n;k++)
    {
        y=x[k];
        for(i=k-1;i>=0 && y<x[i];i--)
        {
            x[i+1]=x[i];
        }
        x[i+1]=y;
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
void preencherVetor(int x[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        x[i]=rand()%100;
        ins++;
    }
}

int main()
{
    int vetor[20];
    int n;
    int op;
    do{
        printf("1-ordenar o vetor\n");
        printf("2-imprimir o vetor\n");
        printf("3-preencher o vetor automaticamente\n");
        printf("0-sair\n");
        scanf("%i",&op);
        switch(op){
            case 1: //printf("valor a ser inserido\n");
                    //scanf("%i",&n);
                    insertSort(vetor,ins);
                    break;
            case 2: imprimeVetor(vetor,ins);
                    break;
            case 0: break;
            case 3: preencherVetor(vetor,20);
                    break;
            default: op=-1;
                     printf("Selecione uma opção válida\n");
                     break;
        }
    }
    while (op!=0);
    return 0;
}


