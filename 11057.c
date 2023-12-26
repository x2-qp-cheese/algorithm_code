#include <stdio.h>

int main(){
    int n;
    int result = 0;
    int res[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        for(int j = 1; j < 10; j++){
            res[j] = (res[j-1]+res[j])%10007;
        }
    }
    for(int i = 0; i < 10; i++){
        result+=res[i];
        result=result%10007;
    }

    printf("%d", result);
}