/**
 *	author 	: nxtsourav7
 *	created : 2024-06-11 20:36:24
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    auto nxtsourav7 = []()->void {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b;
    };

    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}