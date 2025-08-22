#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a + n);
    int l = 0, r = n - 1;
    bool start = true;
    for(int i = 0 ; i < n ; i++) {
        if(start) {
            cout << a[r] << " ";
            r--;
        }
        else {
            cout << a[l] << " ";
            l++;
        }
        start = !start;
    }
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
