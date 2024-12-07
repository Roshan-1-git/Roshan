#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=5;a<=5;a++)
    {
        
        printf("multiplication table no. of %d\n",a);
        for (b=1;b<=10;b++)
        {
        c=a*b;
        printf("%d * %d=%d\n",a,b,c);
        }
    }
    return 0;
}