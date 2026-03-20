#include<iostream>
#include<string>
using namespace std;
int main() {
    int x;
    string word;
    cin >> x;
    while (x != 0) {
        cin >> word;
        int y = word.length();
        if (y <= 10)  cout<<word<<endl;
        else cout<<word[0]<<y-2<<word[y-1]<<endl;
        x--;
    }
}