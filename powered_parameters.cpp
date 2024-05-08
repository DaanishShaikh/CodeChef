#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>v(n);
    int maxe=INT_MIN;
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        maxe=max(maxe,v[i]);
    }
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(pow(v[i],j+1)<=v[j]){
                count++;
                //cout<<"v["<<i<<"]="<<v[i]<<' '<<"j+1="<<j+1<<' '<<"v["<<j<<"]="<<v[j]<<' '<<"count="<<count<<endl;
            } else {
                break;
            }
        }
    }
    cout<<count<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }

    return 0;
}