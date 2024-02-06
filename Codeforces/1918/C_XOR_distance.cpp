/**
 *	author 	: nxtsourav7
 *	created : 2024-01-30 21:22:37
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


bool bit(int n, int i) {
	return n & (1ll<<i);
}


auto solve = []() {
	int a,b,r;
    cin >> a >> b >> r;

    int x = 0;
	bool flag = true;
	if(a>b) swap(a, b);
	for(int i=63; i>=0; --i) {
		bool bit_a = bit(a, i);
		bool bit_b = bit(b, i);
		if(bit_a != bit_b) {
			if(flag) flag = false;
			else {
				int xor_bit = 1ll<<i;
				if(!bit_a && (x+xor_bit<=r)) {
					x += xor_bit;
					a ^= xor_bit;
					b ^= xor_bit;
				}
			}
		}
	}

	cout << b-a;
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