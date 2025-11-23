#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        long long max=*max_element(arr.begin(),arr.end());
        vector<long long > b,c;
        for(int i=0;i<n;i++){
            if(arr[i]!=max)
                b.push_back(arr[i]);
            else
                c.push_back(arr[i]);
        }
        if(b.size()==0)
            cout<<-1<<endl;
        else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0;i<b.size();i++)
            cout<<b[i]<<" ";
        cout<<endl;
        for(int i=0;i<c.size();i++)
            cout<<c[i]<<" ";
        cout<<endl;
        }
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;i<n;j++){
        //         if(arr[i]%arr[j]==0)
        //             b.push_back(arr[i]);
        //         else
        //             c.push_back(arr[i]);
        //     }
        // }
        
    }
    return 0;
}