#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while(test--) {
        int n;
        cin >>n;

        int max = 0;
        int ans;
        for(int i=1 ; i<=n ; i++) {
            int a,b;
            cin >> a >> b;

            if(a<=10 && b>max) {
                max = b;
                ans = i;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}