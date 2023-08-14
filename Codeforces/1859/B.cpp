/*
*	author 	: nxtsourav7
*	problem : Olya and Game with Arrays
*	created : 2023-08-14 08:40:15
*/
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;

    vector<int> sm;//second min element
    int min_number = 1e9;
    for(int i=0 ; i<n ; ++i) {
        int szv;
        cin >> szv;

        vector<int> v(szv);
        for(auto &a : v) {
            cin >> a;

            if(a < min_number) min_number = a;
        }

        sort(v.begin(),v.end());

        sm.push_back(v[1]);
    }

    sort(sm.rbegin(),sm.rend());
    long long sum = 0;
    for(auto a : sm) sum += a;

    cout << sum - sm.back() + min_number << '\n';
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