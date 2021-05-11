/*
   storage for temp test codes for reading books
*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
int main()
{
    int num, div;
    bool isPrime;
    printf("please enter a number:");
    while (scanf("%d", &num)== 1)
    {
        for (div  = 2,isPrime=true; (div * div) <= num; div++)
        {
            if (num%div == 0)
            {
                if (div* div!=num)
                {
                    printf("%d can be divisible by %d and %d\n", num, div, num / div);
                }
                else
                {
                    printf("%d can be divisible by %d\n",num, div);
                }
                isPrime = false;
            }
        }
        if (isPrime)
        {
            printf("%d is a prime\n",num);
        }
        printf("please enter a number:");
    }
    printf("Bye\n");
    return 0;
}
