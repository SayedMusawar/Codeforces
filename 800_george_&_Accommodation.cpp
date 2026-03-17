// https://codeforces.com/problemset/problem/467/A

#include<iostream>
using namespace std;
int main() {
    int n,p,q;
    int count = 0;
    cin >> n;

    while (n--) {
        cin >> p >> q;
        if (p < q) {
            if((++p) != q) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}