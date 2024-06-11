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

int LCM(int a,int b){
    return a/__gcd(a,b) * b;
}

int solve(){
    int n;cin>>n;
    for (size_t i = 2; i < n/2; i++)
    {
        int x = n - i;
        if( x % i  == 0 && LCM(x,i) <= x ) {cout<< x<<" "<< i<<endl;break;}
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