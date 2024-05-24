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
    string s;
    getline(cin,s);
    int n=s.size();
    // cout<<n<<endl;
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout<<s[i]<<" ";
    // }
    
     set<char> set;
    for (size_t i = 0; i < n; i++)
     {
         if(s[i] == '{' || s[i] == '}' || s[i] == ',' || s[i] ==  ' '){continue;}
        else set.insert(s[i]);
    }
     cout<<set.size()<<endl;
    
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

 for(int i = 0;i<1;i++){
solve();
}}