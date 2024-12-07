#include <stdio.h>
int main()
{
    int num = 0;
    int reversednum = 0;
    int originalnum = 0;

    printf("enter the numbers:");
    scanf("%d",&num);
    originalnum= num;


    while(num != 0)
    {
        int temp = num % 10;
        reversednum = reversednum*10 + temp;
        num = num /10;
    }
     
    if(reversednum==originalnum)
    {
        printf("it is palindrome");
    } 
    else
    printf("it is not a palindrome");
    
    return 0;
}