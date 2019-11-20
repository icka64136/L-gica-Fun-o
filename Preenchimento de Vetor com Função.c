#include<stdio.h>

pre(int x[],int y)
{
	int i;
	for(i=0; i<y; i++)
	{
		printf("Digite um Valor: \n");
		scanf("%d",&x[i]);
	}
}
imp(int x[],int y)
{
int i;
	
	for(i=0; i<y; i++)
	{
		printf("%d \t",x[i]);
	}	
}
main()
{
	int vet[5],vet2[3],vet3[4];
	
	printf("Vetor 1: \n");
	pre(vet,5);

	printf("\n Vetor 2: \n");
	pre(vet2,3);

	printf("\n Vetor 3: \n");
	pre(vet3,4);	

/* ############################## Divisória entre Preencimento de Vetor e Impressão de Vetor ###################################### */
	
	printf("\n Vetor 1: \n");
	imp(vet,5);
	
	printf("\n Vetor 2: \n");
	imp(vet2,3);
	
	printf("\n Vetor 3: \n");
	imp(vet3,4);
	
	
}
