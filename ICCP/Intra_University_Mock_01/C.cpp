#include<bits/stdc++.h>


using namespace std;


const int N = 1e7;


int main(void) {
    bitset< N > s;
    s.reset();


    for(int i=2 ; i<N ; i++) {
        if(s[i]) continue;


        for(int u = 2*i ; u<=N ; u += i) {
            s[u] = 1;
        }
    }


    int n;
    cin >> n;

    int count = 0;
    for(int i = 2 ; i < N ; i++) {
        if(!s[i]) count++;


        if(count == n) {
            cout << i << '\n';
            break;
        }
    }


    return 0;
}