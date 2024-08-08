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
//#define push_back pb;

int operation(string x, string y,pair<int,int> p){
        vector<char>a;
        vector<char>b;
        int ans = 0;
        for (size_t i = p.first-1; i <= p.second-1; i++)
        {
            a.push_back(x[i]);
            b.push_back(y[i]);
        }

         vector<int> v(a.size()+b.size()); 
    vector<int>::iterator it, st; 

    it = set_intersection(a.begin(), 
                          a.end(), 
                          b.begin(), 
                          b.end(), v.begin()); 
       
       // sort(a.begin(),a.end());
        //sort(b.begin(),b.end());

        for (it = v.begin(); it != v.end(); it++)
        {
            cout<<*it<<endl;
        }
        

        return a.size() - v.size();
        
}

void solve(){
    int n,q;cin >> n >> q;
    string a, b;
    cin>>a;
    cin>>b;
    vector<pair<int,int>>v;
    for (size_t i = 0; i < q; i++)
    {
        int x,y;cin >> x >> y;v.push_back(make_pair(x,y));
    }


    for (size_t i = 0; i < q; i++)
    {
        int ans = 0;
        ans = operation(a,b,v[i]);
        cout<<ans<<endl;
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