#include <stdio.h>
#include <stdlib.h>
//se usará una función llamada raiz
double raiz(double num, double tolerancia, double resultado){
	//se declaran dos variables más 
	double division, diferencia;

	division=num/resultado;
	diferencia=resultado-division;
	// se hace que diferencia sea con valor absoluto
	diferencia=diferencia>0? diferencia:-diferencia;
	// si la diferencias es menor o igual que la tolerancia se retorna el candidato a resultado 
	if (diferencia<=tolerancia){
		return resultado;
	}	
			else {
				//se obtiene un nuevo candidato
				resultado=(resultado+division)/2;
				//se retorna la función con el nuevo candidato
				return raiz(num, tolerancia, resultado);
			}
	
}
	int main (int argc, char *argu[])
	{
		// se declaran las tres variables necesarias para la función
		double num, tolerancia, resultado;
		//los argumentos se guardan en estas variables
		num=atof(argu[1]); tolerancia=atof(argu[2]); resultado=atof(argu[3]);
		// en esta variable se gurda el resultado
		resultado=raiz(num,tolerancia,resultado);
		printf("%lf\n", resultado );
	}