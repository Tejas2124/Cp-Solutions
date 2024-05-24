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
#define push_back pb;

void solve(){
    int k,q;cin>>k>>q;
    vector<int>a(k),n(q);
    for (auto &x : a) cin >> x;
    for (auto &x : n) cin >> x;
    sort(a.begin(),a.end());

    for (int i = 0; i <q; i++)
    {
        int ans = 0;
        if(n[i]<a.front()){ans = n[i];}
        else { 
            ans = a.front()-1;
        }

        cout<<ans<< ' ';
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
 cout<<endl;
}}