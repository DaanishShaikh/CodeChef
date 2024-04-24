#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--){
        int n,x,y;
        cin>> n >> x >> y;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
            int sum=0;
        for(int i=0 ; i<n ; i++){
            if(v[i]*x>y){
                sum+=y;
            } else {
                sum+=v[i]*x;
            }
        }
        cout<<sum<<endl;
    }
}
