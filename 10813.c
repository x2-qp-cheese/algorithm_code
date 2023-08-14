#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int result[n];
    for(int i = 0; i<n; i++)
        result[i] = i+1;

    int a, b;
    int tmp;
    for (int j = 0; j<m; j++){
        scanf("%d %d", &a, &b);
        tmp = result[b-1];
        result[b-1] = result[a-1];
        result[a-1] = tmp;
    }

    for (int i = 0; i<n; i++)
        printf("%d ", result[i]);
}