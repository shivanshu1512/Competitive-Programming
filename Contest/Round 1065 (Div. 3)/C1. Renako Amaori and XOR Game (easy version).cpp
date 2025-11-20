#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int xora = 0, xorb = 0;
        for (int i = 0; i < n; i++) {
            xora ^= a[i];
            xorb ^= b[i];
        }
        if (xora == xorb) {
            cout << "Tie" << endl;
            continue;
        }
        int last = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) last = i;
        }
 
        if (last == -1) {
            cout << (xora > xorb ? "Ajisai" : "Mai") << endl;
            continue;
        }
        if ((last + 1) % 2 == 1) {
            cout << "Ajisai" << endl;
        } else {
            cout << "Mai" << endl;
        }
    }
}