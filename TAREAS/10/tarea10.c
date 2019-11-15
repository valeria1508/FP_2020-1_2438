#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//si el determinante es positivo
void raicesR (double a, double b, double c, double determinante){
	double x1, x11, x2, x22 ;

	double raiz;
	
	raiz=sqrt(determinante);
	x1=-b+raiz; ///raiz 1 
	x11= x1/(2*a);
	x2=-b-raiz; //raiz 2
	x22= x2/(2*a);

	printf("%.2lf\n",x11);
	printf("%.2lf\n",x22);

}

// si el determinante es imaginario
void raicesI(double a, double b, double c, double determinante){
	//hacer el determinante positivo multiplicandolo por un menos
	double raiz;
	raiz=sqrt(-determinante);
	
	double x111, x12, x21, x222;
	x111=-b/(2*a); x12=raiz/(2*a);
	x21=-b/(2*a); x222= -raiz/(2*a);
	if (b==0){
		x111=0; x21=x111;
	}
	//a las partes imaginarias se les pone i
	printf("%.2lf+%.2lfi\n",x111,x12);
	printf("%.2lf%.2lfi\n",x111,x222);
}

// si el determinante es igual a 0 se tiene un tcp
void raizU(double a, double b){
	double xunica;
	
	xunica= -b/(2*a);
	printf("%.2lf\n",xunica );	
}

// función principal
int main(int argc, char *argv[]){
	double a,b,c,determinante,potencia,multiplicacion;
	a=atof(argv[1]);//variable  al cuadrado
	b=atof(argv[2]);//variable lineal
	c=atof(argv[3]);//variable termino independiente
	potencia=b*b;
	multiplicacion=4*a*c;
	determinante=potencia-multiplicacion;
	
if(determinante==0){
	raizU (a,b);
}
else{
	if (determinante>0){
		raicesR(a,b,c,determinante);
	}
	else{
		raicesI(a,b,c,determinante);
	}
}
return 0;
}