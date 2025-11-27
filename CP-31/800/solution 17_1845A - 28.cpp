#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
 
        vector<int> result;
 
        if (x != 1) {
            // We can use 1 freely
            cout << "YES\n";
            cout << n << '\n';
            for (int i = 0; i < n; ++i)
                cout << 1 << ' ';
            cout << '\n';
        } else {
            if (k == 1) {
                cout << "NO\n";
                continue;
            }
            if (n % 2 == 0) {
                // Use only 2s
                if (2 <= k) {
                    cout << "YES\n";
                    cout << n / 2 << '\n';
                    for (int i = 0; i < n / 2; ++i)
                        cout << 2 << ' ';
                    cout << '\n';
                } else {
                    cout << "NO\n";
                }
            } else {
                // n is odd, use one 3 and the rest 2s (if 2 and 3 are available)
                if (k >= 3) {
                    cout << "YES\n";
                    cout << n / 2 << '\n';  // (n - 3) / 2 twos and one 3
                    for (int i = 0; i < (n - 3) / 2; ++i)
                        cout << 2 << ' ';
                    cout << 3 << '\n';
                } else {
                    cout << "NO\n";
                }
            }
        }
    }
 
    return 0;
}