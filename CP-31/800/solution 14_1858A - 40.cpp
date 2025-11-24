#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        // int x=a+b+c;
        // if(x%2==0)
        //     cout<<"Second"<<endl;
        // else
        //     cout<<"First"<<endl;
        if(c%2==1){
            if(b>a)
                cout<<"Second"<<endl;
            else
                cout<<"First"<<endl;
        }
        else{
            if(a>b)
            cout<<"First"<<endl;
            else
                cout<<"Second"<<endl;
        }
    }
    return 0; 
}