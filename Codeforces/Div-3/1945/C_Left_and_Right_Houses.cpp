/**
 *	author 	: nxtsourav7
 *	created : 2024-03-19 20:22:16
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
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int> L(2,0),R(2,0);
        for(int i=0; i<n; ++i) {
            if(s[i]=='0') R[0]++;
            else R[1]++;
        }

        int ans = -1;
        int tmp = INT_MAX;
        if((n/2)+(n%2) <= R[1]) {
            tmp = n;
            ans = 0;
        }

        for(int i=0; i<n; ++i) {
            if(s[i]=='0') {
                R[0]--;
                L[0]++;
            }
            else {
                R[1]--;
                L[1]++;
            }
            int lftcnt = L[0]+L[1];
            int rgtcnt = R[0]+R[1];
            if((lftcnt/2)+(lftcnt%2) <= L[0] and (rgtcnt/2)+(rgtcnt%2) <= R[1]) {
                int x = abs(rgtcnt-lftcnt);
                if(x<tmp) {
                    tmp = x;
                    ans = i+1;
                }
            }
        }
        cout<<ans;
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