#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> v;
    int len, num;
    char tmp;
    cin >> len;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
}
