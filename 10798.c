#include <stdio.h>
#include <string.h>

int main(){
    char words[5][15];
    for (int i = 0; i < 5; i++){
        scanf("%s", words[i]);
    }
    for(int j = 0; j < 15; j++) {
        for(int i = 0; i < 5; i++){
            if (j < strlen(words[i]))
                printf("%c", words[i][j]);
        }
    }
}