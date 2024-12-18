/**
 *	author 	: nxtsourav7
 *	created : 2024-12-18 12:54:48
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
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    // think what if location of a (0, 0)
    vector<int> x = {xa, xb, xc}, y = {ya, yb, yc};
    sort(all(x));
    sort(all(y));

    int X, Y;

    if(x[1] == xa) X = 0;
    else X = min(abs(xa - xb), abs(xa - xc));

    if(y[1] == ya) Y = 0;
    else Y = min(abs(ya - yb), abs(ya - yc));

    cout << X + Y + 1;
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