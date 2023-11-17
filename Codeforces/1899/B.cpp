/*
*	author 	: nxtsourav7
*	problem : 250 Thousand Tons of TNT
*	created : 2023-11-17 21:37:36
*/

#include<bits/stdc++.h>
using namespace std;


void d0() {
	long long n;
    cin >> n;

    vector<long long> v(n);

    for(auto &it : v) cin >> it;


    long long ans = 0;
    for(long long i=1 ; i<=n ; ++i) {
        if(n%i == 0) {
            vector<long long> temp(n/i);
            long long d = 0;
            long long x = 0;
            for(long long c=0 ; c<n ; c++) {
                temp[d]+=v[c];
                x++;
                if(x==i) {
                    x=0;
                    d++;
                }
            }

            

            ans = max(ans , (*max_element(temp.begin(),temp.end()) - *min_element(temp.begin(),temp.end())));
        }
    }


    cout << ans ;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/* TEST CASE */
	int tc = 1;
	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "case #" << t << ": ";
		d0();
        cout << "\n";
	}

	return 0;
}
