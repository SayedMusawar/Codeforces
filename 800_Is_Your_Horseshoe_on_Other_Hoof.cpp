// https://codeforces.com/problemset/problem/228/A

#include<iostream>
using namespace std;
int main() {
    long long a[4];
    int cnt = 0;

    for (int i = 0; i < 4; i++) cin >> a[i];

    for (int i = 0 ; i < 4; i++) {
        if(a[i] == a[i+1]) cnt++;
        else if(a[i] == a[i+2]) cnt++;
        else if(a[i] == a[i+3]) cnt++;
    }
        
    cout<<cnt<<endl;
    return 0;
}