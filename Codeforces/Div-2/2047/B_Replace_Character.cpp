/**
 *	author 	: nxtsourav7
 *	created : 2024-12-03 20:04:12
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
    int n;      cin >> n;
    string s;       cin >> s;

    vector<pair<int, char>> ht(26);
    for(int i = 0; i < n; ++i) {
        int index = s[i] - 'a';
        ht[index].first++;
        ht[index].second = s[i];
    }

    sort(all(ht));

    char lo;
    for(auto& it : ht) {
        if(it.first != 0) {
            lo = it.second;
            break;
        }
    }
    auto hi = ht.back();

    for(int i = 0; i < n; ++i) {
        if(s[i] == lo) {
            s[i] = hi.second;
            break;
        }
    }

    cout << s;
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