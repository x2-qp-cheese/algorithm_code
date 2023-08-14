#include <stdio.h>
#include <string.h>

int main(){
    int n = 0;
    int result = 0;
    int length = 0;
    int tmp = 0;
    int check[26] = {0,};
    char words[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        tmp = 0;
        scanf("%s", words);
        length = strlen(words);
        for(int j = 0; j < length; j++){
            //만약 알파벳이 이미 존재하는데 그 전에 발견이 안된 경우 break
            if ((check[words[j]-97] != 0) && (words[j] != words[j-1])){
                tmp++;
                break;
            }   
            check[words[j]-97]++;
        }

        if(tmp == 0)
            result++;
        //초기화
        for (int k = 0; k<26; k++)
            check[k] = 0;
    }
    printf("%d", result);
}