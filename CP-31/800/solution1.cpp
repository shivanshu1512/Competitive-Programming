#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), sorted_a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    sorted_a = a;  
    sort(sorted_a.begin(), sorted_a.end());
 
    if (k > 1) {
        cout << "YES" << endl;
        return;
    }
    if (a == sorted_a) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}