/**
 *	author 	: nxtsourav7
 *	created : 2023-12-27 12:40:20
**/

#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long 
#define double long double


#define vi vector<int>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


int T=1;


auto solve = []() {
	int n,k;
    string s;
    cin >> n >> k >> s;

    vi sm(26,0);
    vi bg(26,0);
    for(int i=0; i<n; ++i) {
        if(s[i]>='a' && s[i]<='z') {
            sm[s[i]-'a']++;
        }
        else {
            bg[s[i]-'A']++;
        }
    }
    
    int ans = 0;
    for(int i=0; i<26; ++i) {
        ans += min(sm[i],bg[i]);
        int cur = abs(sm[i]-bg[i])/2;
        
        if(k>=cur) {
            ans += cur;
            k -= cur;
        }
        else {
            ans += k;
            k = 0;
        }
    }

    cout << ans;
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