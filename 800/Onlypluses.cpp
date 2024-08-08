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
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;v.push_back(a);v.push_back(b);v.push_back(c);
    sort(v.begin(),v.end());
  
    int k = 5;
    int diff = v[1] - v[0];
    if(diff <= 5){ v[0]+=diff;k-=diff;v[0]+= k/2;}
    else v[1]+=k/2;

    cout<<v[0]*v[1]*v[2]<<endl;

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