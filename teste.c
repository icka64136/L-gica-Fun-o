#include<stdio.h>

linha(int x,char y) //Função !
{
	int i;
	
	for(i=0; i<x; i++)
	
	{	
		printf("%c",y);
	}
}

main()
{
	int i;
	
	linha(30,'*');
	printf("\n");
	printf("Numeros entre 1 e 5 \n");
	linha(5,'+');
	printf("\n");
	
	for(i=1; i<=5; i++)
	{	
		printf("%d\n",i);
	}
	linha(5,'#');
}
