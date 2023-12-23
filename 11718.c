#include <stdio.h>

int main(){
    char tmp;

    while(scanf("%c", &tmp) != EOF){
        printf("%c", tmp);
    }
    return 0;
}