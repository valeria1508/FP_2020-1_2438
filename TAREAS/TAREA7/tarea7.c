#include <stdio.h>
#include <math.h> //para poder hacer operaciones matemáticas
#include <stdlib.h>

int main (int argc, char*argv[]){
double operacion, base, potencia; //declarar variables con double para usar decimales
//atof para convertir el argumento a número
base=atof(argv[1]); 
potencia=atof (argv[2]);
operacion=pow(base,potencia); //pow se utiliza para hacer potencias
printf("%.2f\n",operacion );
return 0;
}