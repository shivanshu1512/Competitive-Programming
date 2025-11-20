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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        long long first = a[0], last = a[n-1];
        if (first == -1 && last == -1) first = last = 0;
        else if (first == -1) first = last;
        else if (last == -1) last = first;
 
        cout << abs(last - first) << endl;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == -1) {
                if (i == 0) cout << first;
                else if (i == n - 1) cout << last;
                else cout << 0;
            } else 
                cout << a[i];
            if (i < n - 1) cout << " ";
        }
        cout <<endl;
    }
}