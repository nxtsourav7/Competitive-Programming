/**
 *	author 	: nxtsourav7
 *	created : 2024-12-11 03:37:31
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
    int k;      cin >> k;

    // int cur = sqrtl(k);
    // for(int i = k + cur;    ; ++i) {
    //     if(k + (int)sqrtl(i) == i) {
    //         cout << i;
    //         return;
    //     }
    // } // Accepted

    cout << k + (int)(sqrtl(k) + 0.5);
    // http://gimnazija-izdijankoveckoga-kc.skole.hr/upload/gimnazija-izdijankoveckoga-%20kc/multistatic/748/Problem-Solving_Strategies_Engel.pdf
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