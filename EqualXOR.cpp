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
int XOR(int arr[],int start,int end){
    int ans = arr[start];
    for (size_t i = start+1; i <= end ; i++)
    {
         ans = ans^arr[i];
    }
    return ans;  
}
int findCommonKeys(map<int,pair<int,int>>& map1, map<int,pair<int,int>>& map2) {
    int commonKeys;
    for (auto it = map1.begin(); it != map1.end(); ++it) {
        if (map2.find(it->first) != map2.end()) {
            commonKeys = (it->first);
        }
    }
    return commonKeys;
}
void solve(){
    int n,k;
    cin>>n>>k;
    int x[n],y[n];
    for (size_t i = 0; i < n; i++){cin>>x[i];}
    for (size_t i = 0; i < n; i++){cin>>y[i];}

    int t = 2*k;
    map<int,pair<int,int>>m1,m2;
    for (size_t i = 0; i <= n-t; i++)
    {
            int res1 = XOR(x,i,i+t-1);
            m1[res1] = make_pair(i,i+t-1);
            int res2 = XOR(y,i,i+t-1);
            m2[res2] = make_pair(i,i+t-1);
    }
    int ans = findCommonKeys(m1,m2);
    
    int start1  = m1[ans].first;
    int end1 = m1[ans].second;

    int start2 = m2[ans].first;
    int end2 = m2[ans].second;
    for (size_t i = start1; i <=end1; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    for (size_t i = start2; i <= end2; i++)
    {
        cout<<y[i]<<" ";
    }
    cout<<endl;
    
    

    
    
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