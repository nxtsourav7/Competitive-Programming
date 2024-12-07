/**
 *	author 	: nxtsourav7
 *	created : 2024-12-05 21:20:59
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(T) for(int t = 1; t <= T; ++t)
#define fastIO cin.tie(0)->sync_with_stdio(0)

void solve() {
    string s;       cin >> s;
    int sum = 0;
    int two = 0, six = 0;
    for(int i = 0; i < sz(s); ++i) {
        sum += s[i] - '0';
        if(s[i] == '2') two++;
        if(s[i] == '3') six++;
    }
    
    if(sum % 9 == 0) {
        cout << "YES";
        return;
    }
    
    for(int i = 0; i <= two; ++i) {
        for(int j = 0; j <= six; ++j) {
            if((sum + 2*i + 6*j) % 9 == 0) {
                cout << "YES";
                return;
            }
        }
    }

    cout << "NO";
}

int32_t main() {
    fastIO;
    bool Q = true;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}