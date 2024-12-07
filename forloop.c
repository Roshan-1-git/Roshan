     #include<stdio.h>

       int main()
       {
        int number = 0;

        printf("Enter a positive integer:");
        scanf_s("%d",&number);

        if(number < 0)
        {
            printf("A negative number cannot have a factorial");
        }
        else if(number==0||number==1)
        {
            printf(" the factorial of %d is 1.",number);
        }
        else
        {
            int factorial = 1;

            for(int i = number;1 > 0;i--)
            { 
                factorial = factorial = 1;
            }
            printf("the factorial of a %d is %d " ,factorial);

        }
        return 0;
       }

