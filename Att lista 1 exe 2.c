/* Elabore um programa que calcule a média de 4 valores inteiros
digitados pelo usuário e mostre na tela o resultado */
#include<stdio.h>

float soma(float a,float b,float c, float d)
{
	return ((a+b+c+d)/4);  
}

main()
{
	int q,w,e,r;
	
	printf("Digite o Primeiro Valor: \n ");
	scanf("%d",&q);
	printf("Digite o Segundo Valor: \n ");
	scanf("%d",&w);
	printf("Digite o Terceiro Valor: \n ");
	scanf("%d",&e);
	printf("Digite o Terceiro Valor: \n ");
	scanf("%d",&r);
				
	printf("Media : %.1f \n",soma(q,w,e,r)); 

}
