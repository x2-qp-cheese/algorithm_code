#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("0");
        return 0;
    }

    int score[n];
    int min;
    int max;
    int max_i;
    int min_i;

    int result = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    double fifteen  = round((double)n*0.15);

    for (; k < n; k++){
        scanf("%d", &score[k]);
        result+=score[k];
    }

    

    for (; i < fifteen; i++){
        max = -1;
        min = 100;
        for (; j < n; j++) {
            if (score[j] != 0) {
                if (max < score[j]) {
                    max = score[j];
                    max_i = j;
                }
                if (min > score[j]) {
                    min = score[j];
                    min_i = j;
                }
            }
        }
        result-=max;
        result-=min;
        score[max_i] = 0;
        score[min_i] = 0;
    }
    printf("%d", (int)round(result/(n-fifteen*2)));
}