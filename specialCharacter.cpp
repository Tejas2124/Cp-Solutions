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
    int n ;cin>>n;
    if( n % 2 == 0){
        cout<<"YES\n";
        string s = "";
        for (int i = 0; i < n/2; i++)
        {
            if(i%2 == 0) s+="AA";
            else s+="BB";
        }
        cout<<s<<endl;
    }
    else 
     cout<<"NO\n";
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