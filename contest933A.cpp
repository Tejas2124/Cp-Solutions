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
    int n,m,k;
    cin>>n>>m>>k;
    int count = 0;
    vector<int>x,y;

    for (size_t i = 0; i < n; i++)
    {
        int temp;cin>>temp;
        x.push_back(temp);
    }
    for (size_t i = 0; i < m; i++)
    {
        int temp;cin>>temp;
        y.push_back(temp);
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if(x[i] + y[j] <=k) count++;
        }
        
    }
    cout<<count<<endl;
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