#include <stdio.h>

int main(){
    int count = 0;
    int n = 0;
    int temp = 0;
    scanf("%d", &n);
    int b[n];

    for (int i = 0; i<n; i++)
        scanf("%d", &b[i]);
    scanf("%d", &temp);

    for (int i = 0; i < n; i++){
        if (b[i] == temp)
            count++;
    }

    printf("%d", count);
}