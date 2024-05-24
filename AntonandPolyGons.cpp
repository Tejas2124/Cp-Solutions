#include<bits/stdc++.h>
using namespace  std;
int main()
{
    map<string,int>mp;
    mp.emplace("Tetrahedron",4);
    mp.emplace("Cube",6);
    mp.emplace("Octahedron",8);
    mp.emplace("Dodecahedron",12);
    mp.emplace("Icosahedron",20);
    int t;cin>>t;
    int ans = 0;
    for (size_t i = 0; i < t; i++)
    {
        string temp;cin>>temp;
        ans+=mp[temp];
    }
    cout<<ans<<endl;
    return 0;
}
