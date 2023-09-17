#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int valid(int n){
    int i = 1;
    int save = n;
    int tmp = 0;
    int check = 1;
    stack<int> store;

    while(n--){
        cin >> tmp;
        if(tmp == i){
            // cout << "tmp == i\n";
            i++;
        }
        else if(!store.empty() && store.top() == i){
            // cout << "pop\n";
            cout << i << endl;
            store.pop();
            i++;
        }
        else{
            // cout << "push\n";
            store.push(tmp);
        }
    }

    while(!store.empty()){
        if(store.top() != i){
            check = 0;
            break;
        }
        store.pop();
        i++;
    }

    return check;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n = 0;
    cin >> n;
    if(valid(n))
        cout << "Nice";
    else
        cout << "Sad";
}