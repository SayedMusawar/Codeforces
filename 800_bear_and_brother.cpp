//  https://codeforces.com/contest/791/problem/A
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    do {
        a *= 3; // 12, 36
        b *= 2; // 18 ,46
        count++; //1,2
    } while (a <= b);
    cout << count;
    return 0;
}