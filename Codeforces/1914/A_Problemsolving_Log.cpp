/**
 *	author 	: nxtsourav7
 *	created : 2023-12-19 21:38:47
**/


#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
#define sz(x) x.size()


int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n;
        string s;
        cin >> n >> s;
 
        int array[27] = {0};
        for(int i=0; i<n; ++i) {
            array[s[i]-64]++;
        }
 
        int cnt = 0;
        for(int i=1; i<=26; ++i) {
            if(array[i]>=i) cnt++;
        }
 
        cout << cnt;
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