#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {

    int n;
    cin >> n;
    map<int,int> m;
    int value = -1, ok = 0;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        m[x]++;
        if(m[x] == 2 && !ok) {
            ok = 1;
            value = x;
        }
    }
    cout << value << endl;

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
