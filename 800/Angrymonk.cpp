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
//#define push_back pb;

void solve(){
        int n ;int k;
        cin>>n>>k;
        vector<int> v(k);
        for (size_t i = 0; i < k; i++){cin>>v[i];}
       // for (size_t i = 0; i < k; i++){cout<<v[i];}

        sort(v.begin(), v.end());
        int ans =0;
        for (size_t i = 0; i < k-1; i++)
        {
            if(v[i] != 1) ans = ans +  v[i] -1 + v[i];
            else ans++;

     //       cout<<ans<<endl;
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