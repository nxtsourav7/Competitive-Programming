#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
    cin >> n;

    int count = 1;
    int i = 0;
    

    while((1<<i) < n) {
        if((1<<i+1) > n) {
            n = n - (1<<i);
            i = 0;
            count++;
        }
        i++;
    }

    cout << count << endl;
    
}
int main(void) {
	int tc = 1;
	// cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		// cout << "test #" << t << ":";
		solve();
	}
	return 0;
}
