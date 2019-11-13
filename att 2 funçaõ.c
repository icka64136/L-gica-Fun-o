#include<stdio.h>

int soma(int a,int b)
{
	return (a+b);  // Return é ultilizado para devolver apenas o Resultado.
}

main()
{
	int x,y,w;
	
	printf("Digite o primeiro Valor \n ");
	scanf("%d",&x);
	printf("Digite o segundo Valor \n ");
	scanf("%d",&y);
	
	
	
	//w=soma(x,y);
	
	//printf("Resultado : %d \n",w);
	printf("Resultado : %d \n",soma(x,y)); 
}
