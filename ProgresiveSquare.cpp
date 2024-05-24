#include <iostream>
#include <algorithm>
#include <vector>
using ll = long long int;
using namespace std;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<ll> v;
    int s = n * n;
    for (int i = 0; i < s; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    //cout << v[0] << endl;

    ll arr[n][n];
    arr[0][0] = v[0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0) arr[i][j] = arr[i][j - 1] + d;
            else if (i > 0) arr[i][j] = arr[i - 1][j] + c;
        }
    }

    vector<ll> t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t.push_back(arr[i][j]);
        }
    }
    sort(t.begin(), t.end());
    if (v == t) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        solve();
    }
}
