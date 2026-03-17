// https://codeforces.com/problemset/problem/1873/A

#include <iostream>
#include <cstring> // For strcmp
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        char ch[4];
        cin >> ch;

        // Check if the string is already "abc"
        if (strcmp(ch, "abc") == 0) {
            cout << "YES" << endl;
            continue;
        }

        bool canBeRearranged = false;

        // Try all possible single swaps
        for (int i = 0; i < 3; ++i) {
            for (int j = i + 1; j < 3; ++j) {
                swap(ch[i], ch[j]); // Perform the swap
                if (strcmp(ch, "abc") == 0) {
                    canBeRearranged = true;
                }
                swap(ch[j], ch[i]); // Undo the swap
                if (canBeRearranged) break;
            }
            if (canBeRearranged) break;
        }

        if (canBeRearranged) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}