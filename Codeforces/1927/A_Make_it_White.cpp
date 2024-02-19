/**
 *	author 	: nxtsourav7
 *	created : 2024-02-17 23:23:08
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
        int n;
        string s;
        cin >> n >> s;

        int st, ed;
        bool flag = true;
        for(int i=0; i<n; ++i) {
            if(flag && s[i]=='B') {
                st = i;
                flag = false;
            }
            if(s[i]=='B') ed = i; 
        }
        cout << ed-st+1;
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