#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int c;
        cin>>c;
        if(c%2==0){
            cout<<c/2<<' '<<c/2<<endl;
        }
        else{
            cout<<(c/2)+1<<' '<<c/2<<endl;
        }
    }
return 0;
}