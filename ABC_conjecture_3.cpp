#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    string q="abc";
    int flag=0;
    int target=0;
    int count=0;
    int j=0;
    for(int i=0 ; i<s.size() && j<3 ; i++){
        if(s[i]==q[j]){
            cout<<s[i]<<' '<<q[j]<<endl;
            j++;
        }
        if(j==2){
            flag=1;
            break;
        }
    }
    while(flag){
        count++;
        j=0;
        flag=0;
    for(int i=0 ; i<s.size() && j<3 ; i++){
        if(s[i]==q[j]){
            cout<<s[i]<<' '<<q[j]<<endl;
            j++;
        }
        if(j==2){
            flag=1;
            target=i;
            break;
        }
    }
        s.erase(s.begin()+target);
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