/*
*	author 	: nxtsourav7
*	problem : United We Stand
*	created : 2023-08-13 19:44:36
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(auto &a : v) cin >> a;

    bool flag = true;

    for(int i=0 ; i<n-1 ; i++) {
        if(v[i] != v[i+1]) {
            flag = false;
        }
    }

    if(flag) {
        cout << "-1\n";
        return;
    }
    //sort
    sort(v.begin(),v.end());
    //checking number of max element
    int mcount = 0;
    for(int i=0 ; i<n ; i++) {
        if(v[i] == v[n-1]) {
            mcount++;
        }
    }

    cout << n-mcount << " " << mcount << '\n';

    for(int i = 0 ; i<(n-mcount) ; i++) {
        cout << v[i] << " ";
    }
    cout << '\n';
    for(int i = (n-mcount) ; i<n ; i++) {
        cout << v[i] << " ";
    }
    cout << '\n';
    
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