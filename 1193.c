#include <stdio.h>

int main(){
    int count = 0;
    int bunja = 1;
    int bunmo = 1;
    int add = 0;
    int odd_even = 0;
    scanf("%d", &count);

    if(count!= 1){
        while(count != 1){
            add = bunmo+bunja;
            if (bunja == 1 && odd_even == 0){
                bunmo = add;
                bunja = 1;
                odd_even = 1;
                count--;
            }
            else if(bunmo == 1 && odd_even == 1){
                bunmo = 1;
                bunja = add;
                odd_even = 0;
                count--;
            }
            else{
                if(odd_even == 0){
                    bunja--;
                    bunmo++;
                    count--;
                }
                else{
                    bunja++;
                    bunmo--;
                    count--;
                }
            }
        }
    }

    printf("%d/%d", bunja, bunmo);

}