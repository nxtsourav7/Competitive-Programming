/**
 *	author 	: nxtsourav7
 *	created : 2024-02-19 20:35:46
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()


int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        string s;
        cin >> s;

        int cnt = 0;
        for(auto& it : s) {
            if(it == 'A') {
                cnt++;
            }
        }

        cout << (cnt >= 3 ? "A":"B");
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