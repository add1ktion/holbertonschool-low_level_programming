#include <stdio.h>
/**
*
*
*
*/
int main(void)
{
    int a = 1;
    int b = 2;
    int pair = 0;

    while (b <= 4000000)
    {
        if (b % 2 == 0)
        {
            pair += b;
        }

        int next = a + b;
        a = b;
        b = next;
    }

    printf("%d\n", pair);
    return 0;
}