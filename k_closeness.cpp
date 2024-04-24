/*not accepted*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	while(tt--){
	    int n,k;
	    cin >> n >> k;
	    int maxnum=INT_MIN;
	    vector<int>v(n);
	    for(int i=0 ; i<n ; i++){
	        cin>>v[i];
	        maxnum=max(maxnum,v[i]);
	    }
	    sort(v.begin(),v.end());
        // for(int i=0 ; i<n ; i++){
        //     cout<<v[i]<<' ';
        // }
        // cout<<endl;
	    int p=0;
	    for(int i=0 ; i<v.size() ; i++){
            if(maxnum-v[i]>k&&(maxnum-v[i])%k!=0){
	        p=((maxnum-v[i])/k)+1;
	        v[i]+=p*k;
            } else {
                p=((maxnum-v[i])/k);
	            v[i]+=p*k;
            }
	    }
        // for(int i=0 ; i<n ; i++){
        //     cout<<v[i]<<' ';
        // }
        //cout<<endl;
	    sort(v.begin(),v.end());
        // for(int i=0 ; i<n ; i++){
        //     cout<<v[i]<<' ';
        // }
        // cout<<endl;
	    cout<<v[v.size()-1]-v[0]<<endl;
	}
    return 0;
}
