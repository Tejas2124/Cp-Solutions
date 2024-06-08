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
    int n,m;
    cin>>n>>m;
    string k;
    cin>>k;
    map<char,int>mp;
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;
    mp['D'] = 0;
    mp['E'] = 0;
    mp['F'] = 0;
    mp['G'] = 0;
int ans = 0;
    auto it = mp.begin();
    
    for (size_t i = 0; i < n; i++)
    {
        mp[k[i]]++;
    }
    
    for (size_t i = 0; i < m; i++)
    {
        auto it = mp.begin();
        while (it != mp.end())
        {
            if(it->second == 0){ans++;it++;}

            else { 
                it->second--;
                it++;                
            }
        }
        
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