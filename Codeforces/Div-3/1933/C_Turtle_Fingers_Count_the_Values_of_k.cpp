/**
 *	author 	: nxtsourav7
 *	created : 2024-02-27 21:55:48
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()


int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int a, b, l;
        cin >> a >> b >> l;

        int cnt_a = 1, cnt_b = 1;
        ll tmp_a = a;
        ll tmp_b = b;
        while(true) {
            if(l%tmp_a == 0){
                tmp_a *= a;
                cnt_a++;
            }
            else {
                break;
            }
        }
        while(true) {
            if(l%tmp_b == 0){
                tmp_b *= b;
                cnt_b++;
            }
            else {
                break;
            }
        }

        int i,j;
        ll ans = 0;
        set<ll> st;
        for(i=0; i<=cnt_a; ++i) {
            for(j=0; j<=cnt_b; ++j) {
                ll tmp = pow(a,i)*pow(b,j);
                if(tmp<=l and l%tmp == 0) st.insert(l/tmp);
            }
        }

        cout << sz(st);
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