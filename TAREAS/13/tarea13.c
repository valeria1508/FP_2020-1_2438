

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int numeros[argc-1];
	
	int i=0, j=1, numero;
	while (i<argc-1){
		numero=atoi(argv[j]);
		numeros[i]=numero;
		i++;
		j++;
	}
	int aux; 
	for (i=1; i<argc-1; i++){ //recorrer la lista
		for (j=0; j<argc-1-i; j++){ //cambiar de posición
			if(numeros[j]>numeros[j+1]){ //si el primer num es mayor que el segundo num
				aux =numeros[j]; //se gusrda en auxiliar 
				numeros[j]= numeros[j+1]; //El numero siguiente se convierte en el anterior
				numeros[j+1]= aux; //el nuemero anterior se guarda en aux
			}
		}
	}
	for (int i=0; i<argc-1; i++){
    printf("%i\n",numeros[i] );
     }
return 0;
}