#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int list[argc];
int suma=0;
float promedio;

for (int i=1; i<argc; i++){
	list[i]=atoi(argv[i]);
}

for (int i=1; i<argc; i++){
	suma=suma+list[i];
}

promedio=(float)suma/(argc-1);
printf("%.2f\n",promedio );

	return 0;
}