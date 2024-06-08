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


void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++){cin>>arr[i];}
    vector<int>g_max;
    
    for (int start = 0; start < n-1; start++)
    {   
        for (int end = start+1; end < n; end++)
        {   vector<int>v;
            int x =  start;
            while (x<= end)
            {
             v.push_back(arr[x]); 
             x++;  
            }
            sort(v.begin(),v.end());
            int k = v.back();
            g_max.push_back(k);
            
        }
        
    }
    sort(g_max.begin(),g_max.end());
    
    cout<<g_max[0]-1<<endl;
   

    
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
