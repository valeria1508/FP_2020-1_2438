#include <stdio.h>
#include <stdlib.h>
int main(int arg; char* argu[])
{
	int resultado; //lo que se va a imprimir
	int argui[argc]; //lista donde se guardan valores
	for(int i=1; i<argc; i++)
	{
	resultado=1;
	//se excluye avlores del neutro multiplicativo
	for(int j=1; j<argc; j++)
	{
	argui[j]=atoi(argu[j]); //copia la lista argu
	resultado=resultado*argui[j];
	}
resultado=resultado/argui[i];
printf("%i\n", resultado);
	}
	return 0;
	}


	
	
