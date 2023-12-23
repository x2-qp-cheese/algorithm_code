#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int result[n];
    for (int i = 0; i < n; i++) {
        result[i] = i+1;
    }

    int a, b;
    int tmp;

    for (int i = 0; i < m;  i++){
        scanf("%d %d", &a, &b);
        for(int j = 0; j < ((b-a+1)/2); j++){
            tmp = result[a-1+j];
            result[a-1+j] = result[b-1-j];
            result[b-1-j] = tmp;
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);
}