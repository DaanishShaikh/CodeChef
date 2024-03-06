/*Accepted*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int sum=0;
        while(true){
            sum+=n%2;
            n=n/2;
            if(n=1){
                break;
            }
        }
        sum+=n;
        if(sum%2==0){
            cout<<"EVEN"<<endl;
        } else{
            cout<<"ODD"<<endl;
        }
    }
    return 0;
}
