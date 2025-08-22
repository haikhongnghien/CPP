#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve(int a, int m) {

    for(int i = 1 ; i <= m ; i++) {
        if((a * i) % m == 1) {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;

}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        int a, m;
        cin >> a >> m;
        solve(a,m);
    }

    return 0;
}
