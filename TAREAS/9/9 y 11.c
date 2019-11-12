#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argu[]){
	int numeroD; //numero de dígitos
	numeroD=strlen(argu[1]); //strlen para saber cuantos caracters tiene
	char arguc[numeroD]; //argumentos de caracteres es una nueva lista para guardar el numero
	int resultado=0;
	int digitos[numeroD]; //digitos es una lista de enteros para guardar el numero
	//se suman los caracteres de acuerdo con el numero de digitos
for (int i=0;i<numeroD;i++){
	//se guardda el numero en la lista de caracteres
	arguc[i]=argu[1][i];
	//se guarda otra vez pero en la lista de enteros
	digitos[i]=atoi(&arguc[i]);
	//se suma cada digito por separado 
	resultado=resultado+digitos[i];
}
printf("%i\n", resultado );
return 0;

}