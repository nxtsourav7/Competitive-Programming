/**
 *	author 	: nxtsourav7
 *	created : 2024-12-31 18:29:12
**/

#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void S0LVE() {
    int n, p;
    cin >> n >> p;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].second;
    for(int i = 0; i < n; i++) cin >> a[i].first;

    sort(a.begin(), a.end());
    int cnt = 1;
    int64_t ans = p;
    for(int i = 0; i < n; ++i) {
        if(a[i].first > p || cnt == n) break;

        int tmp = min(a[i].second, n - cnt);
        cnt += tmp;
        ans += (tmp * a[i].first * 1LL);
    }
    cout << ans + (n - cnt) * p;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int Q;
    cin >> Q;
    while(Q--) {
        S0LVE();
        cout << '\n';
    }

    return 0;
}