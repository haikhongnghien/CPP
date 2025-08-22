#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    int n; 
    cin >> n;
    long long a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    vector<long long> v(n,-1);
    for(int i = 0 ; i < n ; i++) {
        if(a[i] < n && a[i] >= 0) {
            v[a[i]] = a[i];
        }
    }
    for(int i = 0 ; i < n ; i++) cout << v[i] << ' ';
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
