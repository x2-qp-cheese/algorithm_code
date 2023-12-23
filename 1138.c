#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int candidate[n];
    int result[n];
    int count = 0;

    for (int i = 0; i < n; i++){
        scanf("%d", & candidate[i]);
        result[i] = 100;
    }

    for (int i = 0; i<n; i++){
        int count = 0;
        int start = 0;
        int j = i+1;
        while(count != candidate[i]){
            if(j < result[start])
                count++;
            
            start++;
        }
        result[start] = j;
    }

    for (int i = 0; i<n; i++)
        printf("%d ", result[i]);
}