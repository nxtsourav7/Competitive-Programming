/*Two Arrays And Swaps*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n,k;
        cin >> n >> k;
        
        int a[n];
        int b[n];
        //input of array[a] !!
        for(int i=0 ; i<n ; i++) {
            cin >> a[i];
        }
        //input of array[b] !!
        for(int i=0 ; i<n ; i++) {
            cin >> b[i];
        }

        //sorting
        sort(a , a+n);
        sort(b , b+n , greater<int>());

        //swap
        for(int i=0 ; i<k ; i++) {
            if(b[i] > a[i]) {
                swap(a[i],b[i]);
            }
        }

        //sum
        int sum=0;
        for(int i=0 ; i<n ; i++) {
            sum=sum+a[i];
        }

        //result
        cout << sum << endl; 
    }

    return 0; 
}
