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
    int pos = 0;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[n];
    }
    int pref[n];
    pref[0]=arr[0];
    for (size_t i = 1; i < n; i++)
    {
        pref[i] = pref[i-1]+arr[i];
    }
    for(int i = 0 ; i < n;i++){
        if(pref[i] % 3 == 0){
            pos = i+1;
        }
    }
    if (pref[n-1])
;
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