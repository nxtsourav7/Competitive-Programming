/**
 *	author 	: nxtsourav7
 *	created : 2023-12-29 10:26:16
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define endl "\n"
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
    int n,m,p;
    cin >> n >> m >> p;

    int count = 0;
    int sum = 0;
    int i = 0;
    while (n>=sum) {
        sum = m+i*p;
        i++;
        count++;
    }

    cout << count-1;
};


int32_t main() {
    fastIO;
    // cin >> T;
    for(int t=1; t<=T; ++t) {
        // cout << "Case #" << t << ": ";
        solve();
        cout << endl;
    }
    return 0;
}