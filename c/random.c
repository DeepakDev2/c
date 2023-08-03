#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, i, attempt = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Choose your number: \n");
    for (i = 200; i != num; attempt++)
    {
        scanf("%d", &i);
        if (num > i)
        {
            printf("Choose a higher number: ");
        }
        else if (num < i)
        {
            printf("Choose a lower number: ");
        }
        else
        {
            printf("You choose the correct number in %d attempt", attempt);
            break;
        }
    }

    return 0;
}