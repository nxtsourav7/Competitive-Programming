/**
 *	author 	: nxtsourav7
 *	created : 2024-12-19 21:09:38
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
    string s;
    cin >> s;

    int n = sz(s);
    // int zero = 0;
    int fst = 0, lst = 0, one = 0;
    bool flag = false;
    for(int i = 0; i < n; ++i) {
        // if(s[i] == '0') {
        //     zero = i;
        //     break;
        // }

        if(!flag) {
            if(s[i] == '0') {
                fst = i;
                lst = i;
                flag = true;
            }
        }
        else {
            if(s[i] == '0') lst += 1;
            else {
                one = i;
                break;
            }
        }
    }

    int need = n - fst;
    if(flag) {
        // 2 * fst - lst - 1
        int st = max(1LL, 2 * fst - lst);
        cout << "1 " << n << " " << st << " " << st + need - 1;
    }
    else {
        cout << "1 1 1 " << n;
    }
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