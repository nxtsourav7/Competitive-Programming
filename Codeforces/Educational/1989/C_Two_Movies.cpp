/**
 *  author : nxtsourav7
 *  created : 2024-07-01 00:37:16
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    auto nxtsourav7 = []()->void {
        int n; cin >> n;
        vector<int> A(n), B(n);
        for(auto &it : A) {cin >> it;}
        for(auto &it : B) {cin >> it;}

        int m1 = 0, m2 = 0, pls = 0, neg = 0;
        for(int i = 0; i < n; ++i) {
            if(A[i] > B[i]) m1 += A[i];
            else if(B[i] > A[i]) m2 += B[i];
            else if(A[i] == 1) pls++;
            else if(A[i] == -1) neg++;
        }
        while(pls--) (m1 > m2 ? m2 : m1)++; 
        while(neg--) (m1 > m2 ? m1 : m2)--; 
        cout << min(m1, m2);
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