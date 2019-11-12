#include <stdio.h>
#include <stdlib.h>
int main (int arcgc, char*argu[]){
float num1, num2, resultado=1;
//atof para convertir a numero
num1=atof(argu[1]);
num2=atof(argu[2]);
//Hacer la potencia con multiplicaciones
//Repetir el proceso hasta que i sea menor al numero dos 
for (int i=0; i<num2; i++){
	resultado=resultado*num1;
}
printf("%.2f\n", resultado );
return 0;
}