#include<stdio.h>
int main()
{
    int i;
    float S=0;
    for(i=1;i<=100;i++)
    {
       S=S+(1.0/i);
    }
    printf("%.2f",S);
}
