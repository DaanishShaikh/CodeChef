#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i= 0; i<t ; i++){
        cin>>a[i];
    }
    for(int k= 0; k<t ; k++){
        if(a[k]+3<=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}