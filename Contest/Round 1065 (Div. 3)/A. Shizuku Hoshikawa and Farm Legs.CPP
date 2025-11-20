#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            cout << 0 << endl; 
            continue;
        }
        int ans = n / 2;
        cout << (ans / 2 + 1) << endl;
    }
}