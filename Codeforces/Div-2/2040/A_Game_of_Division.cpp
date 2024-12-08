/**
 *	author 	: nxtsourav7
 *	created : 2024-12-08 20:44:24
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

    vector<int> ht(100);
    for(int i = 0; i < n; ++i) {
        ht[a[i] % k] += 1;
    }

    bool flag = false;
    int idx;
    for(int i = 0; i < 100; ++i) {
        if(ht[i] == 1) {
            idx = i;
            flag = true;
            break;
        }
    }

    if(!flag) {
        cout << "NO";
        return;
    }

    for(int i = 0; i < n; ++i) {
        if(a[i] % k == idx) {
            cout << "YES" << endl;
            cout << (i + 1);
            return;
        }
    }
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