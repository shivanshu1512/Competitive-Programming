#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        bool threedot=false;
        int total=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i+1<n && s[i+1]=='.'&& i+2<n && s[i+2]=='.'){
                threedot=true;
                break;
            }
            if(s[i]=='.')
                total++;
        }
        if(threedot)
            cout<<2<<endl;
        else
            cout<<total<<endl;
    }
}
 