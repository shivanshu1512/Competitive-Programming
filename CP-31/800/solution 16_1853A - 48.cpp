#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
            for(int i=0;i<n;i++)
            cin>>a[i];
        // if(is.sorted(arr.begin(),arr.end()))
        //     cout<<0<<endl;
        long long operation=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i]<=a[i+1]){
                long long diff=a[i+1]-a[i];
                long long required=(diff/2)+1;
                operation=min(operation,required);
            }
            else
                operation=0;
        }
            
        cout<<operation<<endl;
        
    }
    return 0;
}