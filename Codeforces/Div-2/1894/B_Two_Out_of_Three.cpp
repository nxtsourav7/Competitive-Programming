/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 03:17:05
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    map<int, int> cnt;  
    for(int x : a) cnt[x]++;
    int k = 0;
    for(auto [x, y] : cnt) {
        if(y > 1) {
            k += 1;
        }
    }

    if(k < 2) {
        cout << - 1;
        return;
    }

    vector<int> ans(n, 2);
    bool flag = false;
    int j;
    for(int i = 0; i < n; i++) {
        if(cnt[a[i]] > 1) {
            if(!flag) {
                ans[i] = 1;
                j = a[i];
                flag = true;
            }
            else {
                if(a[i] != j) {
                    ans[i] = 3;
                    break;
                }
            }
            
        }
    }

    for(int x : ans) cout << x << ' ';
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