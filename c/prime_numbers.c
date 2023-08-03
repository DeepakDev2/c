#include <stdio.h>
int main()
{
    int a = 2, b = 2, d;
    printf("I can find all the prime number between two numbers: \n");
    printf("Give me a Number: \n");
    scanf("%d", &d);
    while (a < d)
    {
        int c = a % b;
        if (a > b)
        {
            if (c == 0)
            {
                a++;
                b = 2;
            }
            else
            {
                b++;
            }
        }
        else if (a == b)
        {
            printf("%d \n", a);
            a++;
            b = 2;
        }
    }
    printf("Prime number between 1 and %d \n", d);
    printf("Press any key to exit \n");
    scanf("%d", &a);

    return 0;
}