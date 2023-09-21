/*
*	author 	: nxtsourav7
*	problem : Building an Aquarium
*	created : 2023-09-21 22:03:00
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve() {
    int n,w;
    cin >> n >> w;
    vector<int> v(n);
    for(auto &a : v) {
        cin >> a;
    }
    int max_n = *max_element(v.begin(),v.end());
    int total = 0;
    for(int i=0 ; i<n ; ++i) {
        total += max_n-v[i];
    }

    if(total <= w) {
        cout << max_n + (w-total)/n << "\n";
    }
    else {
        int low = 1;
        int high = max_n;
        int ans = -1;
        while(low<=high) {
            int mid = low + (high-low)/2;
            int water =0;
            for(int i=0 ; i<n ; ++i) {
                if(v[i] < mid) {
                    water += mid-v[i];
                }
            }

            if(water <= w) {
                ans = mid;
                low = mid+1;  
            }
            else {
                high = mid-1;
            }
        }

        cout << ans << "\n";
    }
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