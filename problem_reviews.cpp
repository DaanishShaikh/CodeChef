#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag=true;
        vector<int> v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
            if(v[i]<5){
                flag=false;
            }
            else{continue;}
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
    return 0;
}