/**
 *	author 	: nxtsourav7
 *	created : 2024-12-21 18:16:01
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(T) for(int t = 1; t <= T; ++t)
#define fastIO cin.tie(0)->sync_with_stdio(0)

void solve() {
    int H, W, x, y;
    cin >> H >> W >> x >> y;
    x -= 1, y -= 1;
    vector<vector<char>> grid(H, vector<char>(W));
    vector<vector<bool>> flag(H, vector<bool>(W, false));
    for(auto &row : grid) for(auto &cell : row) cin >> cell;
    string S;
    cin >> S;

    int ans = 0;
    for(auto &c : S) {
        if(c == 'U' and x >= 1 and grid[x-1][y] != '#') {
            x -= 1;
            if(grid[x][y] == '@' and !flag[x][y]) {
                ans += 1;
                flag[x][y] = true;
            }
        }
        else if(c == 'D' and x < H-1 and grid[x+1][y] != '#') {
            x += 1;
            if(grid[x][y] == '@' and !flag[x][y]) {
                ans += 1;
                flag[x][y] = true;
            }
        }
        else if(c == 'L' and y >= 1 and grid[x][y-1] != '#') {
            y -= 1;
            if(grid[x][y] == '@' and !flag[x][y]) {
                ans += 1;
                flag[x][y] = true;
            }
        }
        else if(c == 'R' and y < W-1 and grid[x][y+1] != '#') {
            y += 1;
            if(grid[x][y] == '@' and !flag[x][y]) {
                ans += 1;
                flag[x][y] = true;
            }
        }
    }

    cout << x + 1 << " " << y + 1<< " " << ans;
}

int32_t main() {
    fastIO;
    bool Q = false;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}