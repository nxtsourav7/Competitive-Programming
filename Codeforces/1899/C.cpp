/*
*	author 	: nxtsourav7
*	problem : Yarik and Array
*	created : 2023-11-17 22:32:51
*/

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> a, int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        // if(a[i] % 2 == a[i+1]%2) 

        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0 || abs(a[i]%2) == abs(a[i+1]))
            max_ending_here = 0;


        if (i<size-1 && abs(a[i]%2) == abs(a[i+1]%2))
            max_ending_here = 0;
    }
    return max_so_far;
}


void d0() {
	int n;
    cin >> n;

    vector<int> v(n);

    for(auto &it : v) cin >> it;
    

    int max_sum = maxSubArraySum(v , v.size());

    cout << max_sum;
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
