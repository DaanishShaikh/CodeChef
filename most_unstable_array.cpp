#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >>tt;
    while(tt--){
        long long n,m;
        cin >>n>>m;
        if(n<3){
            cout<<m<<endl;
        } else {
            cout<<2*m<<endl;
        }
    }
    return 0;
}