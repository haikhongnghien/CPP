#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(a[i][j] == 1) {
                for(int k = 0 ; k < n ; k++) {
                    if(a[k][j] != 1) a[k][j] = 2;
                }
                for(int k = 0 ; k < m ; k++) {
                    if(a[i][k] != 1) a[i][k] = 2;
                }
            }
        }
    }
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(a[i][j] == 2) cout << 1 << " ";
            else cout << a[i][j] << " ";
        }
        cout << endl;
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
