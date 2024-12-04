/**
 *	author 	: nxtsourav7
 *	created : 2024-12-04 20:51:12
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
    vector<int> a(n);
    for(auto &it : a) {cin >> it;}

    int sum = 0;
    int pos = 0, neg = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] == 0) continue;
        sum += (a[i] / k);
        if(a[i] % k != 0) {
            if(a[i] > 0) pos++;
            else {
                neg++;
                sum--;
            }
        }
    }

    if(sum == 0) cout << "YES";
    else if(sum < 0 and pos + neg >= abs(sum)) cout << "YES";
    else cout << "NO"; 
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