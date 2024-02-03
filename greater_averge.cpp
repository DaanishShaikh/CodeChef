#include<iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    float a[(testcases)*3];
    float avg;
    for(int i=0 ; i<((testcases)*3) ; i++){
        cin>>a[i];

    }
    for(int k=0 ; k<((testcases)*3) ; k+=3){
        avg=((a[k]+a[k+1])/2);
        if(avg>a[k+2]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
    
    return 0;
}