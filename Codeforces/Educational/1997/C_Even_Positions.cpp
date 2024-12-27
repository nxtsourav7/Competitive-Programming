/**
 *	author 	: nxtsourav7
 *	created : 2024-12-27 13:51:43
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    int n;
    string s;  
    cin >> n >> s;

    int bal = 0;
    int sO = 0, sC = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '_') {
            if(bal == 0) s[i] = '(';
            else s[i] = ')';
        }
        if(s[i] == '(') {
            sO += i;
            bal += 1;
        }
        else {
            sC += i;
            bal -= 1;
        }
    }
    cout << sC - sO;
    // cerr << s << '\n';
}

void S1LVE() {
    int n;
    string s;  
    cin >> n >> s;

    stack<int> RBS;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        if(RBS.empty() || s[i] == '(') {
            RBS.push(i);
        }
        else {
            ans += i - RBS.top();
            RBS.pop();
        }
    }
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