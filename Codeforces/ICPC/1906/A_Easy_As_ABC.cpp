/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 11:45:42
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    vector<string> s(3);
    for(auto &x : s) cin >> x;

    int n = 3;
    vector<string> ans;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            string t;
            t.resize(3);
            t[0] = s[i][j];

            for(int a = max(0, i - 1); a < min(n, i + 2); ++a) {
                for(int b = max(0, j - 1); b < min(n, j + 2); ++b) {
                    if(a == i && b == j) continue;

                    t[1] = s[a][b];

                    for(int x = max(0, a - 1); x < min(n, a + 2); ++x) {
                        for(int y = max(0, b - 1); y < min(n, b + 2); ++y) {
                            if(x == a && y == b || x == i and y == j) continue;
                            
                            t[2] = s[x][y];
                            
                            ans.push_back(t);
                        }
                    }
                }
            }
        }
    }

    cout << *min_element(ans.begin(), ans.end());
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q = 1;
    // cin >> Q;
    while(Q--) {
        S0LVE();
        cout << '\n';
    }

    return 0;
}