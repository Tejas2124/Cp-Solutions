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
	int size;cin>>size;
	string s;cin>>s;
	int count = 0;
	for (size_t i = 0; i < s.length(); i++)
	{	
		
		if(i+4 <= s.length()){
		if( s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' && s[i+3] == 'i' && s[i+4] == 'e'){
			count++;
			i+=4;
		}
		}
		 if( i+2<=s.length() &&  s[i] == 'm'&& s[i+1] == 'a'&&s[i+2] == 'p' ){
			count++;i+=2;
		}
		 if ( i+2<=s.length() && s[i] == 'p'&& s[i+1] == 'i'&&s[i+2] == 'e' ){
			count++;i+=2;
		}	
	
		
	}
	cout<<count<<endl;
	
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