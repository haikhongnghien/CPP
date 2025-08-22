#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

int check(int n) {
    if(n < 2) return 0;
    for(int i = 2 ; i <= sqrt(n) ; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

void solve(long long n) {

    for(int i = 2 ; i <= sqrt(n) ; i++) {
        while(n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if(n > 1) cout << n << endl;
    else cout << endl;
    
}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        solve(n);
    }

    return 0;
}
