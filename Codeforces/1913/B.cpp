/**
 *	author 	: nxtsourav7
 *	problem : Swap and Delete
 *	created : 2023-12-18 21:59:11
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
#define fastIO cin.tie(0)->sync_with_stdio(0)


int T=1;


auto solve = []() {
	string binary;
    cin >> binary;

    int cnt_one = 0;
    int cnt_zero = 0;
    for(int i=0; i<sz(binary); ++i) {
        if(binary[i]=='1') {
            cnt_one++;
        }
        else {
            cnt_zero++;
        }
    }

    if(cnt_one==cnt_zero) {
        cout << 0;
    }
    else {
        for(int i=0; i<sz(binary); ++i) {
            // if(cnt_one==0 || cnt_zero==0) break;
            // if(binary[i]=='1') cnt_zero--;
            // else cnt_one--;

            if(binary[i]=='1') {
                if(cnt_zero>0) cnt_zero--;
                else break;
            }
            else {
                if(cnt_one>0) cnt_one--;
                else break;
            }

        }

        cout << (cnt_one+cnt_zero);
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