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
     int n;string s;cin>>n;cin>>s;
     int window = 0;
     int one = 0;
        for (size_t i = 0; i < s.length(); i++)
        {
            if(s[i] == '1')one++;
        }
     for (size_t i = 0; i < s.length()-1; i++)
     {
        if(s[i] == '1' && s[i+1] =='1')window++;
     }
     if( (window == 1 && one == 2) || one % 2 != 0 ) cout<<"No\n";
      else cout<<"Yes\n";
    
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