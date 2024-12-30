/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 21:21:25
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + m);
    for(auto &x : a) cin >> x;

    // key observation: last element of B always present in A
    int last = a.back();
    sort(a.rbegin(), a.rend());
    int64_t ans = 0;
    bool flag = false;
    for(int i = 0; i < n; i++) {
        ans += a[i];
        if(a[i] == last) flag = true;
    }
    cout << (flag ? ans : ans + last - a[n - 1]);
}

void S1LVE() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + m);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end()-1); // sort all except last element
    reverse(a.begin(), a.end());
    int64_t ans = 0;
    for(int i = 0; i < n; i++) ans += a[i];
    cout << ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    while(Q--) {
        // S0LVE();
        S1LVE();
        cout << '\n';
    }

    return 0;
}