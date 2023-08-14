#include <stdio.h>
#include <string.h>

int main(){
    char word[100];
    scanf("%s", word);
    int j = strlen(word);
    int k = (j/2);
    for (int i = 0; i<k; i++){
        if (word[i] != word[j-1-i]){
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}