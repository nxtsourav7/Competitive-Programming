/**
 *	author 	: nxtsourav7
 *	created : 2024-12-28 01:28:44
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    cin >> n;
    vector<int> a(n);   
    for(auto &x : a) cin >> x;

    if(a.front() == a.back()) {
        cout << "NO";
        return;
    }

    cout << "YES\n";
    string s(n, 'R'); s[1] = 'B';
    cout << s;
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