// https://codeforces.com/contest/546/problem/A
#include<iostream>
using namespace std;
int main() {
    int k , n , w;
    cin >> k >> n >> w;
    int c = 0,rem;
    for (int i = 1 ; i <= w ; i++) c += (k*i);
    rem = c - n;
    if(rem > 0) cout<< rem <<endl;
    else cout<<0;
    return 0;
}