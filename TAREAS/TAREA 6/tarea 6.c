#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argu[]){
	int resultado; // resultado a mostrar
	int argui [argc]; //lista para los valores enteros
	// dos for, uno para excluir el argu[i]
	for (int i=1; i<argc; i++){
		//el pprimer resultado es el neutro multiplicativo
		resultado=1;
		//el otro for hace la operación sin excluir
		for (int j=1; j<argc; j++){
			//aquí se copia la lista argu[] que es string a argui[]
			argui[j]=atoi(argu[j]);
			//resultado sin excluir a ergu[i]
			resultado=resultado*argui[j];

		}
		//un avez que tenemos el reslutado se excluye argu[i] en el segundo for con su inverso multiplicativo
		resultado=resultado/argui[i];
		printf("%i\n",resultado );
	}
	return 0;
}