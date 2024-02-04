/**
 *	author 	: nxtsourav7
 *	problem : Distinct Buttons
 *	created : 2023-12-23 20:51:19
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
	int n;
    cin >> n;

    int x1=0,x2=0,y1=0,y2=0;
    while(n--) {
        int x;
        int y;
        cin >> x;
        cin >> y;

        if(x<0) {
            x1 = 1;
        }
        else if(x>0) {
            x2 = 1;
        }

        if(y<0) {
            y1 = 1;
        }
        else if(y>0) {
            y2 = 1;
        }
    }

    if(x1+x2+y1+y2 < 4) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
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