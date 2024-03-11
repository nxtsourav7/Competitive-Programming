/**
 *	author 	: nxtsourav7
 *	created : 2024-02-27 14:43:10
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()



auto nxtsourav7 = []()->void {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for(auto& it : arr) {cin >> it;}

    int ans = 0;
    map<pair<int, int>, int> mp;
    for(int i=0; i<n; ++i) {
        pair<int, int> tmp(arr[i]%x, arr[i]%y);
        ans += mp[tmp];
        pair<int, int> tmp1((x-(arr[i]%x))%x, arr[i]%y);
        mp[tmp1]++;
    }
    cout << ans;
};



int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);

    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}