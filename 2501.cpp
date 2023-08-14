#include <iostream>

using namespace std;

int main(){
    int num; 
    int i;
    cin >> num >> i;
    for (int j = 1; j <= num; j++){
        if(num%j == 0){
            i--;
            if(i == 0){
                num = j;
                break;   
            }
        }
        if (j == num){
            num = 0; 
            break;
        }  
    }
    cout << num;
}