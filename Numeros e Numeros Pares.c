//UTILIZANDO FUNÇÕES, ELABORE UM PROGRAMA QUE GUARDE 10 NÚMEROS INTEIROS EM UM VETOR E IMPRIMA TODOS OS NÚMEROS E OS NÚMEROS PARES
#include<stdio.h>

pre(int x[],int y)
{		
	int i;
	
	for(i=0; i<y; i++)
	{
		printf("Digite um Valor \n");
		scanf("%d",&x[i]);
	}
}
imp(int x[], int y)
{
	int i;
	
	for(i=0; i<y; i++)
	{
		printf(" %d \n",x[i]);	
	}
}
par(int x[], int y)
{
	int i;
	
	for(i=0; i<y; i++)
	{	
		if(x[i]%2==0)
		{
			printf(" %d \n",x[i]);		
		}
	}

}

	
main()
{
	int vet[10];
		
	
	pre(vet,10);
	printf("Numeros Digitados : \n");
	imp(vet,10);
	printf("Numeros Pares : \n");
	par(vet,10);
	
}
//posição indice verifica i
