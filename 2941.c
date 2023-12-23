#include <stdio.h>
#include <string.h>

int main(){
    char words[101];
    scanf("%s", words);
    int length = strlen(words);
    int i = 0;
    int result = 0;

    while(1){
        if(words[i] == 'c'){
            if(words[i+1] == '='){
                result+=1;
                i+=2;
            }
            else if(words[i+1] == '-'){
                result+=1;
                i+=2;
            }
            else{
                result+=1;
                i++;
            }
        }
        else if(words[i] == 'd'){
            if(words[i+1] == 'z' && words[i+2] == '='){
                result+=1;
                i+=3;
            }
            else if(words[i+1] == '-'){
                result+=1;
                i+=2;
            }
            else{
                result+=1;
                i++;
            }
        }
        else if(words[i] == 'l'){
            if(words[i+1] == 'j'){
                result+=1;
                i+=2;
            }
            else{
                result+=1;
                i++;
            }
        }
        else if(words[i] == 'n'){
            if(words[i+1] == 'j'){
                result+=1;
                i+=2;
            }
            else{
                result+=1;
                i++;
            }
        }
        else if(words[i] == 's'){
            if(words[i+1] == '='){
                result+=1;
                i+=2;
            }
            else{
                result+=1;
                i++;
            }
        }
        else if(words[i] == 'z'){
            if(words[i+1] == '='){
                result+=1;
                i+=2;
            }
            else{
                result+=1;
                i++;
            }
        }
        else{
            result+=1;
            i++;
        }
        if (i > length-1)
            break;
    }
    printf("%d", result);
}