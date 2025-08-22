#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve(int n) {
    for(int i = 2 ; i <= sqrt(n) ; i++) {
        int d = 0;
        while(n % i == 0) {
            d++;
            n /= i;
        }
        if (d > 0) cout << i << " " << d << " ";
    }
    if(n > 1) cout << n << " " << 1 << endl;
    else cout << endl;
}

int main() {
    
    FASTER;
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
