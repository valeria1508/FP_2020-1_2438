#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{
    float sum, resta,mult,division;
    float a,b;
    a=atof(argv[1]);
    b=atof(argv[2]);
    sum=(float)a+b;
    resta=(float)a-b;
    mult=(float)a*b;
    division=(float)a/b;
    
    printf("%f.2\n",sum);
   printf("%f.2\n",resta);
   printf("%f.2\n",mult);
   printf("%f.2\n",division);
   
   return 0;
}
