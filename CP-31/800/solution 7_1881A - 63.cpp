#include <bits/stdc++.h>
using namespace std;
 
int min_operations_to_include_substring(string x, string s) {
    string original = x;
    for (int ops = 0; ops <= 10; ++ops) {
        if (x.find(s) != string::npos) {
            return ops;
        }
        x += x; 
    }
    return -1;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        cout << min_operations_to_include_substring(x, s) << endl;
    }
}