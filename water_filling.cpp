#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int a[3];
        for(int i=0 ; i<3 ; i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0; i<3 ; i++){
            if(a[i]==1){
                count++;
            }
        }
        if(count<2){
            cout<<"WATER FILLING TIME"<<endl;
        }
        else{
            cout<<"NOT NOW"<<endl;
        }
    }
    return 0;
}