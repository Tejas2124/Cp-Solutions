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
    int n;cin>>n;
     int arr[n];
    int k =n;
        for(int i = 0;i<k;i+=2){
            arr[i] = n;
            n--;
        }
         for(int j = 1;j<k;j+=2){
            arr[j] = n;
            n--;
        }
        
        for(int x = 0;x< k;x++){
            cout<<arr[x]<<" ";
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