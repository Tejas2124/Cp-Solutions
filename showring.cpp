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
#define push_back pb;


void solve(){
    int t;
    ll s,m;
    cin>>t;cin>>s>>m;

    ll arr[m+1] = {0};
    for (size_t i = 0; i < t; i++)
    {
        int l,r;cin>>l;cin>>r;
        for (size_t i = l; i <= r ; i++)
        {
            arr[i] = 1;
        }
    }
    int flag = 0;
    for (size_t i = 0; i <= m-s +1;i++)
    {
        int sum = 0;
        for (size_t j = i; j < i+s; j++)
        {
            sum+=arr[j];
            cout<<sum<<endl;
        }
        
        if ( sum == 0) cout<<"YES"<<endl;flag = 1;break;
    }
       if(flag == 0) cout<<"NO"<<endl;


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