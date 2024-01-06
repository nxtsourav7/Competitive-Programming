/**
 *	author 	: nxtsourav7
 *	created : 2024-01-06 20:50:07
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define endl '\n'
#define ff first 
#define ss second
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
	int n;
    string s;
    cin >> n >> s;

    int pls = 0;
    for(int i=0; i<n; ++i) {
        if(s[i]=='+') pls++;
    }
    int mns = n-pls;

    cout << abs(pls-mns);
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