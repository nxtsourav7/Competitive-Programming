/**
 *	author 	: nxtsourav7
 *	created : 2024-01-15 21:58:39
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
#define vpii vector<pii>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


#define read(n) int n;cin >> n;
#define inVec(x,n) vi x(n);each(x) cin >> it;


auto solve = []() {
	int n,m;
    cin >> n >> m;
  
    deque<int>a(n),b(m);
    each(a) cin >> it;
    each(b) cin >> it;

    sort(all(a));
    sort(rall(b));

    vector<int> ans;

    while(sz(ans) < n) {
        if(abs(b.back()-a.back()) > abs(b.front() - a.front())) {
            ans.push_back(abs(b.back()-a.back()));
            b.pop_back();
            a.pop_back();
        }
        else {
            ans.push_back(abs(b.front() - a.front()));
            a.pop_front();
            b.pop_front();
        }
    }

    int sum = 0;
    each(ans) sum += it;

    cout << sum;
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