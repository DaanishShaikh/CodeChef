#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int avg1=0;
        int maxw=a[n-1];
        // for(int i=0; i<n ; i++){
        //     int sum=0 , count=0, j=n-1;
        //     for( ; j<j-i; j--){
        //         sum+=a[j];
        //         count++;
        //     }
        //     if(sum/count==a[j]){
        //         maxw=max(a[j]*count,maxw);
        //     }
        // }
        cout<<maxw<<endl;
        // if(avg1==a[n-2]&&avg2>a[n-1]){
        //     cout<<avg2<<endl;
        // }
        // else if(avg1<a[n-1]){
        //     cout<<a[n-1]<<endl;
        // }
    }
    return 0;
}