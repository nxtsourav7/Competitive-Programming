/*
 * author : nxtsourav7
 * Problem : Li Hua and Maze
 * created : Apr/08/2023 20:39:51
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--) {
        int n , m;
        cin >> n >> m;

        int x1 , y1 , x2 , y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int p1 , p2;
        if(x1-1 > 0 && x1+1 <= n && y1-1 > 0 && y1+1 <= m) {
            p1=4;
        }
        else if((x1==1 && y1==1) || (x1==n && y1==m) || (x1==1 && y1==m) || (x1==n && y1==1)) {
            p1=2;
        }
        else {
            p1=3;
        }

        if(x2-1 > 0 && x2+1 <= n && y2-1 > 0 && y2+1 <= m) {
            p2=4;
        }
        else if((x2==1 && y2==1) || (x2==n && y2==m) || (x2==1 && y2==m) || (x2==n && y2==1)) {
            p2=2;
        }
        else {
            p2=3;
        }

        cout << min(p1,p2)<<endl;
    }

	return 0;
} 