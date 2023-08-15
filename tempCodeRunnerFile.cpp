#include <iostream>
using namespace std;

int main(){
    int n = 1;
    int height = 0;

    cin >> n;

    for (int i = n; i >= 1; i--)
        height++;

    cout << 2*n+2*height << endl;
}