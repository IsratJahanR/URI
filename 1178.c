#include<stdio.h>
int main()
{
    int i;
    double X;
    scanf("%lf",&X);
    for(i=0;i<100;i++)
    {

             printf("N[%d] = %0.4lf\n",i,X);
             X=X/2.0;

    }


}


