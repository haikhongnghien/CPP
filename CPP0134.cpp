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

void solve(long long n, int sl) {

    int d = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++) {
        while(n % i == 0) {
            d++;
            n /= i;
            if(d == sl) {
                cout << i << endl;
                return;
            }
        }
    }
    if(d == sl - 1) {
        if(n > 1) cout << n << endl;
        else cout << -1 << endl;
    }
    else cout << -1 << endl;

}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        long long n, sl;
        cin >> n >> sl;
        solve(n, sl);
    }

    return 0;
}
