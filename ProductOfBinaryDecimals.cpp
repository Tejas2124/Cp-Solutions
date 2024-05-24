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
    vector<int>v {1,11,111,10,100,1000,101,110,111,1111,10000};
    set<char>s;
    int i = 0;int ans;
    if( n == 1) {cout << "1\n"; return;} 
    while ( n > 1)
    {
        if(v[i] < n){
            if( n % v[i] == 0){
                ans = n / v[i];
                string temp = to_string(ans);
                int k = temp.length();
                while (k--)
                {   char c = temp[k];
                        s.insert(c);   
                }
                n = n / v[i];
            }
            else continue;
        }
    }

    int x = s.size();
    if(x<=2) cout<<"YES"<<endl;
    else cout<< "No"<<endl;    

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