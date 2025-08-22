#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    int n;
    cin >> n;
    int a[n][3];
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i++) {
        int d = 0;
        for(int j = 0 ; j < 3 ; j++) {
            if(a[i][j] == 1) d++;
        }
        if(d >= 2) sum++;
    }
    cout << sum << endl;

}

int main() {
    
    FASTER;
    solve();

    return 0;
}
