#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    if(n%4){
    cout<<(n/4)+1<<endl;
    } else {
        cout<<(n/4)<<endl;
    }
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