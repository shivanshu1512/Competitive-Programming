#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long>a(n);
        set<pair<long long,int>>st;
        vector<int>L(n),R(n);
        vector<bool>ok(n,true);
 
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert({a[i],i});
            L[i]=(i-1+n)%n;
            R[i]=(i+1)%n;
        }
 
        if(n<=1){
            cout<<0<<endl;
            continue;
        }
 
        long long tot=0;
        int m=0;
 
        while(m<n-1){
            auto p=*st.begin();
            st.erase(st.begin());
            long long v=p.first;
            int i=p.second;
 
            if(!ok[i])continue;
 
            int l=L[i],r=R[i];
            long long c=max(v,min(a[l],a[r]));
            tot+=c;
 
            ok[i]=false;
            R[l]=r;
            L[r]=l;
            m++;
        }
        cout<<tot<<endl;
    }
}