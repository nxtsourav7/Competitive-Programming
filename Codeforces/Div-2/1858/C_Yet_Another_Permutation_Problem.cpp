/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 12:05:32
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define echo(i, a) for(auto& i: a) 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(Q) int Q; cin >> Q; while(Q--)

void solve() {
    int n;
    cin >> n;

    vector<int> took(n + 1, 0);
    cout << 1 << " ";
    for(int i = 2; i <= n; i++) {
        if(took[i]) continue;
        int j = i;
        while(j <= n) {
            cout << j << " ";
            took[j] = 1;
            j *= 2;
        }
    }

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    test(Q) {
        solve();
        cout << endl;
    }
    return 0;
}