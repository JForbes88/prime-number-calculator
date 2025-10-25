#include<stdio.h>

int main()
    {
        int i;
        int p;
        int counter= 0;
        int prime = 0;
        int num;
        printf("Prime Number Calculator\n");
        printf("Enter an upper range ");
        /* upper range value will be saved to num variable*/
        scanf("%d", &num);
        /* loop through all numbers within the range provided by user*/
        for (i = 0; i < num; i++)
        {
            /* find all divisors of the current number (i) */
            for(p = 2; p < num; p++)
            {
                if (i % p == 0)
                {
                    counter++;
                }
            }
            /* for all values of (i) with only one divisor increment the prime variable by 1*/
                if (counter == 1)
                {
                    prime++;
                }
                /* need to reset the counter variable for the next i value */
            counter = 0;
        }
    printf("There are %d prime numbers between 0 and %d", prime, num);
    return 0;
    }
