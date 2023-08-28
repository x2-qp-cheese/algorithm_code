#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a;
    string b;

    cin >> a;
    cin >> b;
    int length_a = a.size();
    int length_b = b.size();
    int temp;
    int check = 0;

    int count_a = count(a.begin(), a.end(), 'B');
    int count_b = count(b.begin(), b.end(), 'B');


    for(int i = length_a; i < length_b; i++){
        temp = a.size();

        int count_a = count(a.begin(), a.end(), 'A');
        int count_b = count(b.begin(), b.begin()+temp, 'A');

        if(count_a == count_b){
            if(b.at(i) == 'A'){
                cout << "hell" << endl;
                a += 'A';}
            else{
                reverse(begin(a), end(a));
                a+='B';
            }
        }
        else{
            if(count_a < count_b)
                a += 'A';
            else{
                reverse(begin(a), end(a));
                a+='B';
            }
        }
    }
    if(a == b)
        cout << "1";
    else
        cout <<"0";


}