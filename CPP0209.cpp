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
    int prefix_sum[n + 2];
    prefix_sum[0] = 0;
    for(int i = 0 ; i < n ; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }
    while(k--) {
        int a, b;
        cin >> a >> b;
        cout << prefix_sum[b] - prefix_sum[a - 1] << endl;
    }
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
