#include <stdio.h>
#include <string.h>

int main(){
    char word[100];
    int n;
    scanf("%s %d", word, &n);
    int length = strlen(word);
    int mult = 1;
    int result = 0;
    for (int i = length-1; i >= 0; i--){
        if(word[i]>='0' && word[i]<='9')
            result += mult*(word[i]-'0');
        else
            result += mult*(word[i]-'A'+10);
        mult*=n;
        
    }
    printf("%d", result);
}