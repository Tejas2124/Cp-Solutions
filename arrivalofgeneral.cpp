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
    


     
    int n ;
    cin>>n;int arr[n];
     
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    if(n == 2){if( arr[0]<arr[1]) cout<<1<<endl;return;}
    int mini = 0,maxi= 0,m = INT_MAX,M = INT_MIN ;
    
    for (int i = 0; i < n; i++) {
      if(m >= arr[i]) { m = min(m,arr[i]);
      mini = i;}
      
        if(M < arr[i]) {M = max(M,arr[i]);
        maxi = i;
    }
    }
    cout<<mini<<" "<<maxi <<endl;

    if( maxi == 0 && mini == n-1) {cout<<0<<endl; return;}
    int ans ;
    if(mini>maxi){
        //cout<<mini<<maxi<<endl;
        ans = n - mini - 1 + maxi ; 

    }
    if(mini<maxi){
        ans = maxi + n - mini - 1 -2;
    }
    cout<<ans<<endl;
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 for(int i = 0;i<1;i++){
solve();
}}