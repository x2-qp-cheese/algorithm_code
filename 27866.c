#include <stdio.h>

int main(){
    char name[1001];
    scanf("%s", name);

    int loc;
    scanf("%d", &loc);

    printf("%c", name[loc-1]);
}