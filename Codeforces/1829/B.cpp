/*
*	author 	: nxtsourav7
*	problem : Blank Space
*	created : 2023-09-21 13:27:40
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve() {
    //input
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &a : v) {
        cin >> a;
    }

    //oparetion
    int count = 0;
    int maximum = 0;
    for(int i=0 ; i<n ; ++i) {
        if(v[i] == 0) {
            count++;
        }
        else {
            count = 0;
        }
        maximum = max(maximum,count);
    }

    //solution
    cout << maximum << "\n";

}
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    /* TEST CASE */
    int tc = 1;
    cin >> tc;
    for(int t=1 ; t<=tc ; t++) {
        solve();
    }

    return 0;
}