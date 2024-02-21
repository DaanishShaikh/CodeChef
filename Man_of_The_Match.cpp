#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        pair<int,int>p[22];
        vector<int>scores(22);
        for(int i=0; i<22 ; i++ ){
            cin>>p[i].first;
            cin>>p[i].second;
        }
        for(int i=0 ; i<22 ; i++){
            p[i].second=p[i].second*20;
        }
        int max=0,maxi=0;
        for(int i=0 ; i<22; i++){
            scores[i]=p[i].second+p[i].first;
            if(scores[i]>max){
                max=scores[i];
                maxi=i+1;
            }
            else{continue;}
        }
        cout<<maxi<<endl;


    }
    return 0;
}