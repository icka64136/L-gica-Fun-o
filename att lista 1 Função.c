/* Elabore um programa que calcule 3 valores inteiros digitados pelo
usuário e mostre na tela o resultado */

#include<stdio.h>

int soma(int a,int b,int c)
{
	return (a+b+c);  
}
int mut(int a,int b,int c)
{
	return (a*b*c);  
}
int div(int a,int b,int c)
{
	return (a/b/c);  
}
int sub(int a,int b,int c)
{
	return (a-b-c);  
}
main()
{
	int x,y,z;
	
	printf("Digite o Primeiro Valor: \n ");
	scanf("%d",&x);
	printf("Digite o Segundo Valor: \n ");
	scanf("%d",&y);
	printf("Digite o Terceiro Valor: \n ");
	scanf("%d",&z);
				
	printf("Soma : %d \n",soma(x,y,z)); 
	printf("Mutiplicacao : %d \n",mut(x,y,z));
	printf("Divisao : %d \n",div(x,y,z));
	printf("Subtracao : %d \n",sub(x,y,z)); 
}
