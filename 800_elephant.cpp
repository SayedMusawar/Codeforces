// https://codeforces.com/problemset/problem/617/A

#include<iostream>
using namespace std;
int main() {
    int x,c = 0;
    cin >> x;
    int r = x % 5;
    int q = x / 5;
    if (r > 0) c = 1;
    int y = q + c;
    cout<<y;
    return 0;
}