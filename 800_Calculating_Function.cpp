// https://codeforces.com/problemset/problem/486/A

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    long long n,y;
    cin >> n;
    if(n % 2 == 0) {
        y = n / 2;
    } else {
        y = -((n + 1) / 2);
    }
    cout<<y<<endl;
    return 0;
}