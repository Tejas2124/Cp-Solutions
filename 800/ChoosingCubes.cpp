#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_set>
using namespace std;
using ll = long long int;
//using in = for(auto& v:a)cin>>a;
//#define push_back =  pb;

void solve(){
    int n ,f,k;
    cin>>n>>f>>k;
    map<int,int>mp;
    vector<int>v;
    for (size_t i = 0; i < n; i++)
    {
        int temp;cin>>temp;v.push_back(temp);
    }
    int fav = v[f-1];
    for (size_t i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    sort(v.rbegin(),v.rend());

    while (k--)
    {
        v.erase(v.begin());
    }
    int c = 0;
    
    for (size_t i = 0; i < v.size(); i++)
    {
        if(v[i] == fav) c++;
    }
    
    if(c > 0 ){

        if( c == mp[fav]){
            cout<<"No"<<endl;
        }
        else cout<<"MAYBE"<<endl;
        

    }
    else cout<<"yes"<<endl;
    

}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
 for(int i = 0;i<n;i++){
solve();
}}