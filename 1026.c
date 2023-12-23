#include <stdio.h>

int length(int a)
{
    int first = 1;
    int gap = 1;

    int one = 2;
    int zero = 4;
    int other = 3;
    int result = 0;

    while (a != 0)
    {
        if (a % 10 == 0)
            result += zero;
        else if (a % 10 == 1)
            result += one;
        else
            result += other;
        result += gap;
        a /= 10;
    }

    return result + first;
}

int main()
{
    int input;
    while (1)
    {
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        printf("%d\n", length(input));
    }
}