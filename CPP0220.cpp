#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> a[i][j];
        }
    }
    for(int j = 0 ; j < n ; j++) {
        for(int i = 0 ; i < n ; i++) {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << a[j][i] << ' ';
            }
            else cout << "  ";
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
