//UTILIZANDO FUNÇÕES, ELABORE UM PROGRAMA QUE GUARDE 6 NÚMEROS INTEIROS E MOSTRE A QUANTIDADE DE NÚMEROS IMPARES


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
/* imp(int x[], int y)
{
	int i;
	
	for(i=0; i<y; i++)
	{
		printf(" %d \n",x[i]);	
	}
} */
int impar(int x[], int y)
{
	int i,cont=0;
	
	for(i=0; i<y; i++)
	{	
		if(x[i]%2==1)
		{
			cont++;
					
		}
			else
			{
				cont=cont;
			}
	}
	return cont;
	//printf("Quantidade de impares: %d",cont);

}

	
main()
{
	int vet[6];
		
	
	pre(vet,6);	
	//impar(vet,6) //ultilizar sem o Return.
	printf("Quantidade de impares: %d",impar(vet,6)); // Ultilizar com o Return.

	
}
