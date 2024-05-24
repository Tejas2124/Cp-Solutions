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
   int n ;cin>>n;
   int s[n];
   for(int i=0;i<n;i++) cin >>s[i];

   for (size_t i = 0; i < n-2; i++)
   {
      if(s[i] < 0 )break;
      else {
         s[i+1] -= 2*s[i];
         s[i+2] -= s[i];
         s[i] = 0;
      }
   }
   int sum = 0;
   for (size_t i = 0; i < n; i++)
   {
    if(s[i] == 0) sum++;
   }
   
   if( sum == n) {cout<<"YES"<<endl;} 
   else cout<<"NO"<<endl;
   
    
    
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