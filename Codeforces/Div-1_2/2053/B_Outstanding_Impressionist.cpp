/**
 *	author 	: nxtsourav7
 *	created : 2024-12-28 21:11:38
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<int> dp(2 * n + 7, 0);
    for(int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
        if(a[i].first == a[i].second) {
            dp[a[i].first]++;
        
        }
    }

    vector<int> prefix(2*n + 7, 0);
    prefix[0] = 1;
    for(int i = 1; i < 2 * n + 7; ++i) {
        if(dp[i] == 0) prefix[i] = prefix[i - 1] + 1;
        else
        prefix[i] = prefix[i - 1];
    }

    for(int i = 0; i < n; ++i) {
        if(a[i].first == a[i].second) {
            if(dp[a[i].first] == 1) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        else {
            if(prefix[a[i].first - 1] == prefix[a[i].second]) {
                cout << "0";
            } else {
                cout << "1";
            }
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    while(Q--) {
        S0LVE();
        cout << '\n';
    }

    return 0;
}