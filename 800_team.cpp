// https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int count=0,sub = 0;
    while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b ==1 && c == 1)) count = 1;
    if (count == 1) sub++;
    count = 0;
    }
    cout << sub;
    return 0;
}