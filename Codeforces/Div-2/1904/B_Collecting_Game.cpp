/**
 * author : nxtsourav7
 * created : 2025-01-03 00:50:30
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void S0LVE() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& x: a) cin >> x;
    
    vector<int> b = a;
    sort(all(b));
    vector<int> pre(n + 1);
    for(int i = 0; i < n; ++i) {
        pre[i + 1] = pre[i] + b[i];
    }
    map<int, int> mp;
    mp[b[n - 1]] = n - 1;
    for(int i = n - 2; i >= 0; --i) {
        if(pre[i + 1] >= b[i + 1]) mp[b[i]] = mp[b[i + 1]];
        else mp[b[i]] = i;
    }
    for(int i = 0; i < n; ++i) {
        cout << mp[a[i]] << " \n"[i == n - 1];
    }
}

void S1LVE() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& x: a) cin >> x;
    
    vector<int> p(n);
    iota(p.begin(), p.end(), 0);
    sort(p.begin(), p.end(), 
        [&](int i, int j) {
            return a[i] < a[j];
        }
    );

    int sum = 0;
    vector<int> ans(n);
    for(int i = 0, j = 0; i < n; ++i) {
        if(i == j) {
            sum += a[p[j]];
            j++;
        }
        while(j < n and sum >= a[p[j]]) {
            sum += a[p[j]];
            j++;
        }
        ans[p[i]] = j - 1;
    }
    for(int i = 0; i < n; ++i) {
        cout << ans[i] << " \n"[i == n - 1];
    }
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    bool testCase = true;
    int Q = testCase ? (cin >> Q, Q) : 1;
    for(int tc = 1; tc <= Q; ++tc) S1LVE();
    return 0;
}