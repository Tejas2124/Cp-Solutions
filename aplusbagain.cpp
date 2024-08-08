#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int k =  (x / 10)+ (x % 10);
        cout<<k<<endl;
    }
    return 0;
}