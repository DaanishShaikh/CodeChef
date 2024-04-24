#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	while(tt--){
	    int n,k;
	    cin >> n >> k;
	    vector<int>v(n);
	    for(int i=0 ; i<n ; i++){
	        cin>>v[i];
	    }
	    int ans=0;
        sort(v.begin(),v.end());
	    for(int i=0 ; i<n ; i++){
	        if(v[i]==1&&k){
	          ans+=6; 
	          k--;
	        } else if(v[i]==2&&k){
	            ans+=5;
	            k--;
	        } else if(v[i]==3&&k){
	            ans+=4;
	            k--;
	        } else {
	            ans+=v[i];
	        }
	    }
	    cout<<ans<<endl;
	}

}
