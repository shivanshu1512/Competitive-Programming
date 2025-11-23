#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> nums(n), arr;
        for(int i = 0; i < n; i++)
            cin >> nums[i];
        arr.push_back(nums[0]);
        for(int i = 1; i < n; i++){
            if(nums[i] >= nums[i - 1])
                arr.push_back(nums[i]);
            else{
                arr.push_back(nums[i]);
                arr.push_back(nums[i]);
            }
        }
        cout << arr.size() << endl;
        for(long long x : arr)
            cout << x << " ";
        cout << endl;
    }
}