// https://codeforces.com/problemset/problem/1283/A

#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;

    while (t--) {
        int h , m;
        cin>> h >> m;
        int rem_mins = 0;
        int rem_hrs = 0;
        rem_hrs = 24 - h;
        rem_mins = 60 - m;

        int mins = (rem_hrs * 60) - m;
        
        cout<<mins<<endl;
    }
    return 0;
}