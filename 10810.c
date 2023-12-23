#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int result[N];
    for(int i = 0; i< N; i++)
        result[i] = 0;

    int i, j, k;

    for(int l = 0; l <M; l++){
        scanf("%d %d %d", &i, &j, &k);
        for(int m = i-1; m<=j-1; m++){
            result[m] = k;
        }
    }
    for(int i = 0; i<N; i++)
        printf("%d ", result[i]);
}