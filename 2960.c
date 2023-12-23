#include <stdio.h>

int main()
{
    int n = 0;
    int count = 0;
    scanf("%d %d", &n, &count);
    int arr[n + 1];

    for (int i = 0; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i])
            for (int j = i; j <= n; j += i)
            {
                if (arr[j])
                {
                    arr[j] = 0;
                    count--;
                    if (count == 0)
                    {
                        printf("%d", j);
                        return 0;
                    }
                }
            }
    }
}
