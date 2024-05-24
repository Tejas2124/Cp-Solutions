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
typedef long long ll;
void solve(){
    int n;ll k;
    std::cin>>n;std::cin>>k;
    vector<ll>v(n);
    for (size_t i = 0; i < n; i++){ll temp;std::cin>>temp;v.push_back(temp);}
    ll count = 0;
    
    if(k% 2 == 0){
            while (k>0)
            {
               if(k>v[0])
                k = k - v[0];
                v.erase(v.begin());

            }
            
    }
    else{

    }
    

}
int main(){
 ios_base::sync_with_stdio(0);
std::cin.tie(0);
std::cout.tie(0);
int n;
std::cin>>n;
 for(int i = 0;i<n;i++){
solve();
}}