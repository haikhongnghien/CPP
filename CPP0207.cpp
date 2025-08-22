#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    for(int i = k ; i < n ; i++) cout << a[i] << ' ';
    for(int i = 0 ; i < k ; i++) cout << a[i] << ' ';
    cout << endl;
}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
