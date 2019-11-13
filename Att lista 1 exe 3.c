/* Elabore um programa que após ler um valor verifique se é par ou
impar. Se for par multiplique por 5 e se for impar divida por 3 e mostre
na tela */
#include<stdio.h>

par(int z)
{
	if(z%2==0)
	{
		 printf("Par : %d",z*5); //O Printf dentro da Função serve para chamar completamente a Função
	}
	else
	{
		 printf("Impar : %d ",z/3);
	}			  
}


main()
{
	int q;
	
	printf("Digite o Primeiro Valor: \n ");
	scanf("%d",&q);
	

	par(q);
				
	 

}
