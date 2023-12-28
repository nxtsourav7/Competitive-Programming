/**
 *	author 	: nxtsourav7
 *	created : 2023-12-28 20:50:00
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
	char ch[3][3];
    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            cin >> ch[i][j];
        }
    }

    bool a=false,b=false,c=false;
    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            if(ch[i][j]=='?') {
                for(int k=0; k<3; ++k) {
                    if(ch[i][k]=='A') {
                        a = true;
                    }
                    else if(ch[i][k]=='B') {
                        b = true;
                    }
                    else {
                        c = true;
                    }
                }
                break;
            }
        }
    }

    if(!a) cout << "A";
    else if(!b) cout << "B";
    else cout << "C";
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