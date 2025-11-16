#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        vector<long long> shiv(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
            if(arr[0]==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        
        
        // shiv=sort(arr.begin(),arr.end());
        // for(int i=1;i<n;i++){
        //     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        //         int temp=arr[i];
        //         arr[i]=arr[i+1];
        //         arr[i+1]=temp;
        //     }
        // }
    }
}