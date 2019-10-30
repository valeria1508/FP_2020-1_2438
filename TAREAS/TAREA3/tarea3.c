#include <stdio.h>
#include <stdlib.h>
 int main(int argc, char *argv[])
{
	float sum, resta, multi, div;
	float num1, num2;
	num1=atof(argv[1]);
	num2=atof(argv[2]);

	sum = (float)num1+num2;
	resta = (float)num1-num2;
	multi = (float)num1*num2;
	div = (float)num1/num2;


    printf("%.2f\n",sum);
    printf("%.2f\n",resta );
    printf("%.2f\n",multi );
    printf("%.2f\n",div );

	return 0;
}