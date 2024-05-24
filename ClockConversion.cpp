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
    string s,hh,mm;
    cin>>s;
   hh =  s.substr(0,2);
   mm =  s.substr(3,2);

   int hour = stoi(hh);
   int min = stoi(mm);


   if(hour < 12 ){
    if(hour != 00)cout<<setw(2)<<setfill('0')<<hh<<":"<<mm<<" AM"<<endl;
    else cout<<setw(2)<<setfill('0')<<12<<":"<<mm<<" AM"<<endl; }
   if(hour >= 12 ){
    if(hour == 12)cout<<setw(2)<<setfill('0')<<hour<<':'<<mm<<" PM"<<endl;
    else {hour = hour - 12;cout<<setw(2)<<setfill('0')<<hour<<':'<<mm<<" PM"<<endl;}}
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