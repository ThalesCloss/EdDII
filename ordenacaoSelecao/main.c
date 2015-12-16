#include <stdio.h>
#include <stdlib.h>
void selecao(int[],int);
void imprimeVetor(int[], int);


int main()
{
    int v[5]={8,4,6,9,1};
    selecao(v,5);
    imprimeVetor(v,5);

}

void selecao(int vetor[], int tamanho)
{   int i,k,troca;
    for(i=0;i<tamanho;i++)
    {
        for(k=i;k<tamanho;k++)
        {
            if(vetor[k]<vetor[i])
            {
                troca=vetor[k];
                vetor[k]=vetor[i];
                vetor[i]=troca;
            }
        }

    }
}

void imprimeVetor(int vetor[],int tamanho){
    int i;
    for(i=0;i<tamanho;i++)
    {
        printf("%d\n",vetor[i]);
    }
}

