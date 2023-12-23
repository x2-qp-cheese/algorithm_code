#include <stdio.h>

int main(){
    int n;
    int m;

    scanf("%d %d", &n, &m);

    int a[n][m];
    int tmp;

    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &tmp);
            a[i][j] += tmp;
        }
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}