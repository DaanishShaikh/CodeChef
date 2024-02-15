#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> aog(n);

        for(int i=0; i<n ; i++){
            cin>>a[i];
            aog[i]=a[i];
        }
        sort(a.begin() , a.end() );
        // for(int i=0; i<n ; i++){
        //     cout<<a[i];
        // }

    }
    return 0;
}