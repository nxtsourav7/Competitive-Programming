/**
 *	author 	: nxtsourav7
 *	created : 2024-08-15 21:21:56
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(T) for(int t = 1; t <= T; ++t)
#define fastIO cin.tie(0)->sync_with_stdio(0)

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &it : arr) {cin >> it;}    

    sort(rall(arr));
    for(int i = 1; i < n; i+=2) {
        int cur = arr[i - 1] - arr[i];
        if(cur <= k) {
            arr[i] += cur;
            k -= cur;
        }
        else {
            arr[i] += k;
            break;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
       ans += ((i & 1) ? -1 * arr[i] : 1 * arr[i]);
    }
    cout << ans;

}

int32_t main() {
    fastIO;
    bool Q = true;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}