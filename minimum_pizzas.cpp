#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        int x;
        cin>>x;
        int total;
        if((n*x)%4==0){
        cout<<n*x/4<<endl;
        }
        else{
        cout<<(n*x/4)+1<<endl;
        }        
    }
    return 0;
}