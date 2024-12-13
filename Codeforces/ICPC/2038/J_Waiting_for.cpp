/**
 *	author 	: nxtsourav7
 *	created : 2024-12-13 12:59:24
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

    int sum = 0;
    while(n--) {
        char e;
        int x;
        cin >> e >> x;

        if(e == 'P') sum += x;
        else {
            if(sum < x) {
                cout << "YES\n";
                sum = 0;
            }
            else {
                cout << "NO\n";
                sum -= x;
            }
        }
    }
}

int32_t main() {
    fastIO;
    bool Q = false;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}