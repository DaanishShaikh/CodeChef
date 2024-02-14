#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    pair<char,int> caesarpair[26]={{'A', 1}, {'B', 2}, {'C', 3}, {'D', 4}, {'E', 5}, {'F', 6},
        {'G', 7}, {'H', 8}, {'I', 9}, {'J', 10}, {'K', 11}, {'L', 12}, {'M', 13}, {'N',14},
         {'O', 15}, {'P', 16}, {'Q', 17}, {'R', 18}, {'S', 19}, {'T', 20}, {'U', 21}, {'V', 22},
          {'W', 23}, {'X', 24}, {'Y', 25}, {'Z', 26}};

    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        string p;
        cin>>p;
        string c;
        cin>>c;
        int indp=0, indc=0, moves=0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<26 ; j++){
                if(p[i]==caesarpair[j].first){
                    indp=caesarpair[j].second;
                }
                if(c[i]==caesarpair[j].first){
                    indc=caesarpair[j].second;
                }
            }
            if(indp>indc){
                moves=26-indp+indc;
                // cout<<"moves="<<moves<<endl;
            }
            if(indp<=indc){
                moves=indc-indp;
                // cout<<"moves="<<moves<<endl;
            }
             if(moves%3==0){
                cout<<moves/3<<' ';
            }
            else{
            while(true){
                moves+=26;
                if(moves%3==0){
                    break;
                }
                // cout<<"moves="<<moves<<endl;
            }
            cout<<moves/3<<' ';
            }
            }
            cout<<endl;
        }
    return 0;
    }
    
