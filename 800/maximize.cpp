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

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve(){
    int x;
    cin >> x;
    vector<int>v;
    int m  = INT_MIN;
    map<int , int >mp;
    for (size_t i = 1; i <= x-1 ; i++)
    {
        int k;
       k =  gcd(x,i)+i;
       mp[i] = k;
       m = max(k,m);

    }
    
    for(auto it : mp){
        if (it.second == m){
            cout << it.first<<endl;
            break;
        }
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