#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int[],int);
void inserirValorVetor(int[],int);
void imprimeVetor(int[],int);
void preencherVetor(int[],int);


int ins=0;


int main()
{
    int vetor[20];
    int n;
    int op;
    do{
        printf("###########################\n######### MENU ############\n###########################\n");
        printf("1-Inserir dados no vetor\n");
        printf("2-imprimir o vetor\n");
        printf("3-preencher o vetor automaticamente\n");
        printf("0-sair\n");
        scanf("%i",&op);
        system("clear");
        switch(op){
            case 1: printf("valor a ser inserido\n");
                    scanf("%i",&n);
                    inserirValorVetor(vetor,n);
                    bubbleSort(vetor,ins);
                    break;
            case 2: printf("Imprimindo Vetor ordenado BubbleSort\n");
                    imprimeVetor(vetor,ins);
                    break;
            case 0: printf("Saindo...");
                    break;
            case 3: printf("Inserindo dados no Vetor automaticamente\n");
                    preencherVetor(vetor,20);
                    bubbleSort(vetor,ins);
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

void inserirValorVetor(int x[],int valor)
{
    if(ins<20)
    {
        x[ins]=valor;
        ins++;
    }
    else
    {
        printf("Não é possivel inserir mais valores no vetor.\n");
    }
}

