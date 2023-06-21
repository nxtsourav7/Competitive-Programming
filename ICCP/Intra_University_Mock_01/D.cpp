#include<bits/stdc++.h>
using namespace std;

void solve() {
	int sub;
    cin >> sub;
    float cg;

    float sum=0;

    for(int i=0 ; i< sub ; i++) {
        cin >> cg;
        sum += cg;
    }

    printf("%.3f\n" ,sum/sub);

}
int main(void) {
	int tc = 1;
	cin >> tc;
	for(int t=1 ; t<=tc ; t++) {
		cout << "Case " << t << ": ";
		solve();
	}
	return 0;
}
