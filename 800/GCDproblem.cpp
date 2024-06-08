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
    int flag = 0;
    for(int i = 1; i<=n/2; i++){
        for(int j = 1; j<n; j++){
        int c = __gcd(i,j);
        if(i + j + c == n  && i != j && j!=c && i != c){
            cout<<i<<' '<<j<<" "<<c<<" "<<endl;
            flag = 1;
        }
        if(flag == 1) break;
    }
    if (flag == 1) break;
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