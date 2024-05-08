#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sumnegative=0;
    for(int i=0 ; i<n/2 ; i++){
        sumnegative+=v[i];
    }
    int sumpositive=0;
    for(int i=n/2 ; i<v.size() ; i++){
        sumpositive+=v[i];
    }
    cout<<sumpositive-sumnegative<<endl;

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