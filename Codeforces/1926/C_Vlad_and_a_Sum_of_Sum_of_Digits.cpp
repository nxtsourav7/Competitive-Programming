/**
 *	author 	: nxtsourav7
 *	created : 2024-02-19 21:07:39
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long 
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()


int sum1NUtil(int n, int dp[]) 
{ 
    if (n < 10) 
        return (n * (n + 1) / 2); 
     
    int d = (int)(log10(n)); 
    int p = (int)(ceil(pow(10, d))); 
    int cur = n / p; 
     
    return (cur*dp[d] + (cur*(cur-1) / 2) * p+cur * (1+n%p)+sum1NUtil(n % p, dp)); 
} 

int sum1N(int n) { 
    int d = (int)(log10(n)); 
    int dp[d+1]; 
    dp[0] = 0; dp[1]=45;
     
    for(int i = 2; i <= d; i++) 
        dp[i] = dp[i-1]*10+45*(int)(ceil(pow(10, i-1))); 
 
    return sum1NUtil(n, dp); 
} 
  

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fixed << setprecision(12);


    auto nxtsourav7 = []()->void {
        int n;
        cin >> n;

        cout << sum1N(n);
    };


    bool Q = true;
    int T = Q? (cin>>T, T) : 1;
    for(int test=1; test<=T; ++test) {
        // cout << "Case #" << test << ": ";
        nxtsourav7();
        cout << endl;
    }
    
    return 0;
}