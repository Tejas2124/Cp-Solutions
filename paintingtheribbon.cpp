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
    int n,m,k;cin>>n>>m>>k;
    if(n == 1){cout<<"No"<<endl;return;}
    else{
        int t = 0 ; if(n % m > 0)t = 1;
      int x =  n/m  + t;
      if (n - x > k) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }



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