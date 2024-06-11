/**
 *	author 	: nxtsourav7
 *	created : 2024-06-11 21:12:52
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
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                cin >> arr[i][j];
            }
        }

        int row;
        int row_cnt = -1;
        for(int i=0; i<n; ++i) {
            int cnt = 0;
            for(int j=0; j<m; ++j) {
                if(arr[i][j] == '#') {
                    cnt++;
                }
            }
            if(cnt > row_cnt) {
                row_cnt = cnt;
                row = i;
            }
        }

        int col;
        int col_cnt = -1;
        for(int j=0; j<m; ++j) {
            int cnt = 0;
            for(int i=0; i<n; ++i) {
                if(arr[i][j] == '#') {
                    cnt++;
                }
            }
            if(cnt > col_cnt) {
                col_cnt = cnt;
                col = j;
            }
        }

        cout << row+1 << " " << col+1;
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