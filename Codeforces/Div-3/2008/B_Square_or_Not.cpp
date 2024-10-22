/**
 *	author 	: nxtsourav7
 *	created : 
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
    int n;
    string s;
    cin >> n >> s;

    int tmp = sqrt(n);
    if(tmp * tmp != n) {
        cout << "No";
        return;
    } 

    for(int i = 0; i < n; ++i) {
        if(i > tmp and i % tmp != 0 and (i + 1) % tmp != 0 and i < (n - tmp)) {
            if(s[i] == '1') {
                cout << "No";
                return;
            }
        }
        else {
            if(s[i] == '0') {
                cout << "No";
                return;
            }
        }
    }

    cout << "Yes"; 
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