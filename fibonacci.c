#include <stdio.h>
int main()
{
    int number;
    int first =1, second =1;
    int next;

    printf("enter the number you want to print to the range of:");
    scanf("%d", &number);

    printf("fibnoacci sequence:%d, %d",first, second);
    for (int i=3; i<=number; i++)
    {
        next = first + second;
        printf(",%d", next);

        first= second;

        second= next;
    }
    return 0;
}