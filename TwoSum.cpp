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
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,pair<int,int>>mp;
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                mp[nums[i]+nums[j]] = make_pair(i,j);
            }
        }
        pair<int,int>val = mp[target];

        int x = val.first;
        int y = val.second;
        vector<int>t;
        t.push_back(x);t.push_back(y);
        return t;
        
    }
};
void solve(){}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
 for(int i = 0;i<n;i++){
solve();
}}