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
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    int pref[n+1];
    vector<int>v;
    v.push_back(0);
    pref[0] = 0;
   for (size_t i = 1; i <= n; i++)
   {
        int temp;cin>>temp;v.push_back(temp);
   }
   
   sort(v.begin(),v.end());

   for (size_t i = 0; i < n; i++)
   {
      pref[i] = pref[i-1]+v[i];
   }
    
   
    
  // long long int sum = 0; 
   int ans = INT_MIN;
    for (int i = n; i >=0; i--)
     {
        int ch = (n - i);
        if(ch > k )break;
        int r = min(i,x);
        int sum = pref[i-r] - (pref[i] - pref[i-r]); 
        ans = max(ans,sum);
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