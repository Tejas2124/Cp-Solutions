#include<bits/stdc++.h>
using namespace std;
using it  = long long int;
#define mod 1000000007

void solve(){
	it n,k;cin>>n>>k;
    it vsum=0;
	it arrs = 0;
    it T = 0;
	// scanning array
	it arr[n];for(it i = 0;i<n;i++){ cin>>arr[i];arrs+=arr[i];}
	
	//finding maximum sum subarray
	
	it maxsum = INT_MIN;it currsum = 0;
	for	(it i = 0;i<n;i++){
		
		if(currsum<0){currsum = 0;}
		
		currsum+=arr[i];
		
		if(maxsum<currsum){ maxsum = currsum;}
	}
	cout<<maxsum<<endl;
	if(maxsum < 0){
        arrs = arrs + mod;
        T = arrs % mod;
    }
    else{
        vector<it>v;
        v[0] = maxsum;
            for (size_t i = 0; i < k-1; i++)
            {
                it temp = 2*(v[i]);
                temp = temp % mod;
                v.push_back(temp);
                cout<<temp<<endl;
            }
            for (size_t i = 0; i < k; i++)
            {
                vsum+=v[i];                
            }

        T =  ((arrs   + vsum % mod)% mod);
              
        cout<<T<<endl;
    }

	
}
int main(){
	int t;cin>>t;
	for(int i = 0;i<t;i++){
		solve();
	}
	return 0;
}