#include<bits/stdc++.h>
using namespace std;
 
 int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int found=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k)
                found++;
        }
        if(found>0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        
    }
  }