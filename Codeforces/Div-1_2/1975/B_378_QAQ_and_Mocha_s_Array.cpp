/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 02:43:23
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    sort(a.begin(), a.end());
    int x = a[0];
    int y = a[1];
    for(int i = 1; i < n; i++) {
        if(a[i] % x != 0) {
            y = a[i];
            break;
        }
    }

    for(int i = 0; i < n; ++i) {
        if(a[i] % x != 0 and a[i] % y != 0) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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