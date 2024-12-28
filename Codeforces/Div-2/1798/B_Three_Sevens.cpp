/**
 *	author 	: nxtsourav7
 *	created : 2024-12-29 02:21:04
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int m;
    cin >> m;
    vector<vector<int>> a(m, vector<int>()); 
    for(int i = 0; i < m; i++) {
        int n;
        cin >> n;
        a[i].resize(n);
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> ans;
    set<int> ST;
    for(int i = m - 1; i >= 0; i--) {
        bool flag = false;
        for(int j = 0; j < a[i].size(); j++) {
            if(ST.count(a[i][j]) == 0 and !flag) {
                ans.push_back(a[i][j]);
                flag = true;
            }
            ST.insert(a[i][j]);
        }
        if(!flag) {
            cout << -1;
            return;
        }
    }
    
    for(int i = m - 1; i >= 0; i--) cout << ans[i] << ' ';
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