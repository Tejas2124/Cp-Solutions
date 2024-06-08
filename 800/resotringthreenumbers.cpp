#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    vector<int>v;
    for (size_t i = 0; i <4; i++)
    {
        int temp;cin>>temp;v.push_back(temp);    }
    sort(v.begin(),v.end());
    int max = v.back();

    for (size_t i = 0; i <4; i++)
    {
        v[i] = max - v[i];
    }
    sort(v.begin(),v.end());
    v.erase(v.begin());

    for(auto i : v){
        cout<<i<<endl;
    }
}