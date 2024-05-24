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
    string s;cin>>s;
    int f = 0;
    for (size_t i = 0; i < s.length()-1; i++)
    {
        if(s[i] == 'i'&&s[i+1]== 't') {f=1;break;}
    }
    if(f == 1)cout<<"YES\n";
    else cout<<"NO\n";
    
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