#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >>n;
    int m;
    cin >> m;
    vector<int>batsmen(n);
    for(int i=0 ; i<n ; i++){
        cin >> batsmen[i];
    }
    vector<int>bowlers(m);
    for(int i=0 ; i<m ; i++){
        cin >> bowlers[i];
    }
    if(n+m>=11 && n>=4 && m>=4){
        sort(batsmen.begin(),batsmen.end());
        sort(bowlers.begin(),bowlers.end());
        long long ans=0;
        ans+=batsmen[n-1];
        //cout<<"ans="<<ans<<endl;
        ans+=batsmen[n-2];
        //cout<<"ans="<<ans<<endl;
        ans+=batsmen[n-3];
        //cout<<"ans="<<ans<<endl;
        ans+=batsmen[n-4];
        //cout<<"ans="<<ans<<endl;
        ans+=bowlers[m-1];
        //cout<<"ans="<<ans<<endl;
        ans+=bowlers[m-2];
        //cout<<"ans="<<ans<<endl;
        ans+=bowlers[m-3];
        //cout<<"ans="<<ans<<endl;
        ans+=bowlers[m-4];
        //cout<<"ans="<<ans<<endl;
            vector<int>r;
            for(int i=0 ; i<n-4 ; i++){
                //cout<<"hi"<<endl;
                r.push_back(batsmen[i]);
            }
            for(int i=0 ; i<m-4;  i++){
                //cout<<"hi"<<endl;
                r.push_back(bowlers[i]);
            }
            sort(r.begin(),r.end());
            for(int i=r.size()-1,k=3 ; k;k--,i--){
                ans+=r[i];
                //cout<<"ans="<<ans<<endl;
            }
        cout<<ans<<endl;
    } else {
        cout<<"-1"<<endl;
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