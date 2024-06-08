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
    vector<int>a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    vector<int>b(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    int m;cin>>m;
    vector<int>d(m);
    for (size_t i = 0; i < m; i++)
    {
        cin>>d[i];
    }
    int ans = 0;
    int j = 0;
    for (size_t i = 0; i < b.size(); i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if(b.empty())break;
            else{
             if(b[i] == d[j]) {
                auto it = b.begin()+ i;
                b.erase(it);
                }
            }
        }
        
    }

    for (size_t i = 0; i < b.size(); i++)
    {
        for (size_t j = 0; j < a.size(); j++)
        {
            if(b.empty())break;
            else{
             if(b[i] == a[j]) {
                auto it = b.begin()+ i;
                b.erase(it);
                }
            }
        }
        
    }
    
    if(b.empty()) cout<<"YES"<<endl;
    else cout<<"No"<<endl;



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