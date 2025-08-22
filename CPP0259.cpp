#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    int n,m,p;
    cin >> n >> m >> p;
    int a[100][100], b[100][100], c[100][100] = {0};
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            cin >> a[i][j];
    for(int i = 0 ; i < m ; i++)
        for(int j = 0 ; j < p ; j++)
            cin >> b[i][j];
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            for(int k = 0 ; k < p ; k++)
                c[i][k] += a[i][j] * b[j][k];
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < p ; j++)
            cout << c[i][j] << ' ';
        cout << endl;
    }

}

int main() {
    
    FASTER;
    solve();

    return 0;
}
