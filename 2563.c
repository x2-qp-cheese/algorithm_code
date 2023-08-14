#include <stdio.h>


int main(){
    int n = 0;
    int sq[100][100] = {0,};
    int a, b;
    int result = 0;
    scanf("%d", &n);

    for (int i =0; i < n; i++ ){
        scanf("%d %d", &a, &b);
        for(int k = a; k < 10+a; k++){
            for(int j = b; j < 10+b; j++)
                sq[k][j]++;
        }
    }

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++)
            if(sq[i][j]>0)
                result++;
    }

    printf("%d", result);
}