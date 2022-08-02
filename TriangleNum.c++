#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k=1;
    for(int i=0;i<t;i++){
        for( int j=0;j<t;j++){
            if(j==1||i==j||i==t){
                cout<<k<<" ";
                k++;
            }
            else
                cout<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}