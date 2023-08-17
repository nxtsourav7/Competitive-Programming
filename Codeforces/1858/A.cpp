/*
*	author 	: nxtsourav7
*	problem : Buttons
*	created : 2023-08-15 20:35:19
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define INF 10000000007

#define each(a,v) for(auto &a : v)
#define f0r(i,n)  for(int i=0 ; i<n ; ++i)


void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int x;
    int y = c/2;
    if(c%2 == 0) {
        x = c/2;
    }
    else {
        x = c/2+1;
    }

    if(a+x > b+y) cout << "First\n";
    else cout << "Second\n";
}
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    /* TEST CASE */
    int tc = 1;
    cin >> tc;
    for(int t=1 ; t<=tc ; t++) {
        solve();
    }

    return 0;
}