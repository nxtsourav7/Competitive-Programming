/**
 *	author 	: nxtsourav7
 *	created : 2024-02-13 21:23:05
**/


#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()


auto nxtsourav7 = []()->void {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto& it : v) {cin >> it;}

    int lft = 1, rgt = 1;
    for(int i=0; i+1<n; ++i) {
        if(v[i] == v[i+1]) lft++;
        else break;
    }
    for(int i=n-1; i>0; --i) {
        if(v[i] == v[i-1]) rgt++;
        else break;
    }

    if(n==0) {
        cout << 0;
        return;
    }

    if(v[0]==v[n-1]) cout << max(0LL,n-rgt-lft);
    else cout << min(n-lft, n-rgt);
};



int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);

    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}