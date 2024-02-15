#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int y;
        cin>>y;
        int x;
        cin>>x;
        int credcoins;
        credcoins=x*y;
        int bags;
        bags=credcoins/100;
        cout<<bags<<endl;
    }
    
    return 0;
}