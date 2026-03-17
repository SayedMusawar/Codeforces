// https://codeforces.com/problemset/problem/2009/A
#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b,c;
        int out;
        cin >> a >> b;
        c = a+ (rand() % b);
        // if(c>= a && c <=b) {
            out = (c - a) + (b - c);
        // }
        cout<<out<<endl;
    }
    return 0;
}