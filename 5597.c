#include <stdio.h>

int main(){
    int student[30];
    for (int i = 0; i<30; i++)
        student[i] = i+1;
    int tmp;
    for(int j = 0; j<28; j++){
        scanf("%d", &tmp);
        student[tmp-1]=0;
    }
    for(int k = 0; k<30; k++){
        if(student[k]!=0)
        printf("%d\n", student[k]);
    }
}