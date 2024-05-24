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
    int x,y;
    cin>>x>>y;
    int ax = 1*x;
    int ay = 4*y;
    int total =  0;
    if(ax + ay> 15){
       if(ay > 2){
        total += ceil(ay/2);  
       }
       if( ay <= 2){
        total += ay;
       }

       
    }
    else if( ax + ay == 0) {
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
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