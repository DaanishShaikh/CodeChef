#include<iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    int a[(testcases)*2];
    int q;
    int r;
    int count=0;
    for(int i=0 ; i<((testcases)*2) ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<((testcases)*2) ; i=i+2){
        r=a[i]%6;
        if(a[i]<=6){cout<<a[i+1]<<endl;
        continue;}
        else{
            if (r!=0){
                count++;
                a[i]=a[i]-r;
            }
        }
        // for ( int j=0; j<((testcases)*2); j=j+2){
            q=a[i]/6;
            // cout<<"q="<<q<<endl;
            count=count+q;
            
        // }
            cout<<count*a[i+1]<<endl;
            count=0;

    }
    return 0;
}