#include <stdio.h>
int main()
{
    int num =0;
    int reversednum = 0;
    int originalnum = 0;

    printf("enter the numbers:");
    scanf("%d",&num);
    originalnum= num;


    while(num != 0)
    {
        int temp = num % 10;
        reversednum = reversednum *10 + temp;
        num = num /10;
    }
    printf("the reverse of %d is%d.",originalnum,reversednum);
    return 0;
}