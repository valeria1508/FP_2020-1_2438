  
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argv[]){
	int condicion;
	double grados,resultado;
	condicion=atoi(argv[1]); //usar atoi para convertir a número
    grados=atof(argv[2]); //atof para convertir en flotante            
	switch(condicion){
		//formulas de conversión
		case 0:
				resultado=(grados*1.8)+32;
				printf("%.2lf\n",resultado);break;
				
		case 1:	
				resultado=(grados-32)/1.8;               
				printf("%.2lf\n",resultado);break;
				
		default:printf("No es valido");	
	}
	 
	return 0;                          
} 