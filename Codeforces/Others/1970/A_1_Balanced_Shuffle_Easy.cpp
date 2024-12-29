/**
 *	author 	: nxtsourav7
 *	created : 2024-12-30 02:11:11
**/

#include<bits/stdc++.h>
using namespace std;

void S0LVE() {
    string s;
    cin >> s;

    int blnc = 0;
    vector<tuple<int, int, char>> S;
    for(int i = 0; i < s.size(); i++) {
        S.push_back({blnc, -i, s[i]});
        if(s[i] == '(') blnc += 1;
        else blnc -= 1;
    }

    sort(S.begin(), S.end());
    for(auto& c : S) {cout << get<2>(c);}
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