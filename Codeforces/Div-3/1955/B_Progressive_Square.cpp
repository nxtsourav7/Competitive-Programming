/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 01:36:39
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> a(n * n);
    for(auto &x : a) {cin >> x;}

    int mn = *min_element(a.begin(), a.end());
    map<int, int> mp;   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            mp[j * d + i * c + mn] += 1;
        }
    }

    for(auto x : a) {
        if(mp.find(x) != mp.end() && mp[x] > 0) {
            mp[x] -= 1;
        }
        else {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
    // for(auto& it : mp) {cerr << it.first << " ";} cerr << '\n';
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