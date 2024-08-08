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
    int n ,k;cin >> n >> k;
    char matrix[n][n];
    char ans[n/k][n/k];

    for (size_t i = 0; i < n; i++){for (size_t j = 0; j < n; j++){cin>>matrix[i][j];}}
   // for (size_t i = 0; i < n; i++){for (size_t j = 0; j < n; j++){cout<<matrix[i][j];}cout<<endl;}
    for (size_t i = 0; i < n; i+=k)
    {
        for (size_t j = 0; j < n; j+=k)
        {
            if (matrix[i][j] == '1'){ans[(i/k)][(j/k)] = '1';}
            else ans[(i/k)][(j/k)] = '0';
        }
        
    }
   //     cout<<"ans"<<endl;
    for (size_t i = 0; i < n/k; i++){for (size_t j = 0; j < n/k; j++){cout<<ans[i][j];}
    cout<<endl;}
    


    
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