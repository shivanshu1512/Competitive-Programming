#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
       long long n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==1)
                sum++;
        }
        if(sum%2==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
    
}