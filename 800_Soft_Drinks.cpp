// https://codeforces.com/problemset/problem/151/A
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalDrink = k * l;          // Total milliliters of drink
    int totalLimeSlices = c * d;     // Total slices of lime
    int totalSalt = p;               // Total grams of salt

    int toastsByDrink = totalDrink / (n * nl);    // Toasts limited by drink
    int toastsByLime = totalLimeSlices / n;       // Toasts limited by lime slices
    int toastsBySalt = totalSalt / (n * np);      // Toasts limited by salt

    int maxToasts = min({toastsByDrink, toastsByLime, toastsBySalt});

    cout << maxToasts << endl;
    return 0;
}