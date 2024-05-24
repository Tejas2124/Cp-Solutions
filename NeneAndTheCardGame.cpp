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
    int n;cin>>n;
    int a[n];
    int ans = 0;;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    map<int,int>count;
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for(auto x:count){
        if(x.second == 2)ans++;
    }
    cout<<ans<<endl;

    
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