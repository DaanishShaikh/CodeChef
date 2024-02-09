#include<iostream>
using namespace std;
int main(){
    int t;          //testcase
    cin>>t;
    int a[t];
    for(int i= 0; i<t ; i++){
        cin>>a[i];                    //taking inputs
    }
    for(int k= 0; k<t ; k++){
        if(a[k]+3<=10){
            cout<<"YES"<<endl;        //output yes
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}