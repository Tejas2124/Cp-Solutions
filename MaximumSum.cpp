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
#include<bits/stdc++.h>
#define mod 1000000007 
using it = long long int;
using namespace std;


void solve(){
        it n,k;cin>>n>>k; 
        it arr[n];
        vector<it>v;
        it sumarr = 0;
        it T = 0;
        for (it i = 0; i < n; i++)
        {
            cin>>arr[i];
            sumarr+=arr[i];
        }
        it maxsum,currSum;
        it ans = 0;
        currSum = 0;maxsum = INT_MIN;
        for (it i = 0; i < n; i++)
        {
            if(currSum<0)currSum = 0;
            currSum+=arr[i];
            if(currSum>maxsum)maxsum=currSum;
        }
      //  cout<<maxsum<<endl;
        if(maxsum < 0){

            T = sumarr;
            T = T + mod;
            T = T % mod;
        }
        else{
            v[0] = maxsum;
            T = maxsum % mod;
            for (it i = 1; i < k; i++)
            {
                v[i] = 2*v[i-1];
                cout<<v[i]<<endl;
            }
            for (size_t i = 0; i < k; i++)
            {
                ans= ans + v[i];
            }
            
            T = (sumarr % mod + ans % mod)% mod;
        } 

    
        
    cout<<T<<endl;
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