/**
 *	author 	: nxtsourav7
 *	created : 2023-12-28 08:36:25
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define nl "\n"
#define f first 
#define s second
#define int long long 
#define double long double


#define vi vector<int>
#define pii pair<int,int>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


auto solve = []() {
    string chk = "314159265358979323846264338327";
    string s;
    cin >> s;

    int cnt = 0;
    for(int i=0; i<sz(s); ++i) {
        if(s[i]==chk[i]) cnt++;
        else break;
    }

    cout << cnt;
};


int32_t main() {
    fastIO;
    cin >> T;
    for(int t=1; t<=T; ++t) {
        // cout << "Case #" << t << ": ";
        solve();
        cout << endl;
    }
    return 0;
}