#include <stdio.h>

int main(){
    float result = 0;
    char subject[100];
    float score;
    float temp;
    float tmp_result = 0;
    char gpa[2];

    for (int i = 0; i < 20; i++){
        scanf("%s", subject);
        scanf("%f", &score);
        scanf("%s", gpa);
        if (gpa[0] != 'P'){ 
            tmp_result += score;
            if (gpa[0] == 'A'){
                temp = 4.0;
            }
            else if (gpa[0] == 'B'){
                temp = 3.0;
            }
            else if (gpa[0] == 'C'){
                temp = 2.0;
            }
            else if (gpa[0] == 'D'){
                temp = 1.0;
            }
            else if (gpa[0] == 'F')
                temp = 0.0;
            if(gpa[1] == '+')
                    temp += 0.5;
            result += temp*score;
        }
    }
    printf("%f", result/tmp_result);

}
