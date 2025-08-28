#include <stdio.h>

void main()
{
    float b,k,m,g;
    printf("BYTES :-");
    scanf("%f",&b);
    k=b/1024;
    m=b/(1024*1024);
    g=b/(1024*1024*1024);
    printf("KBS :-%f\n",k);
    printf("MBS :-%f\n",m);
    printf("GBS :-%f\n",g);
}