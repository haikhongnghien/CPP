#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    string s;
    getline(cin >> ws, s);
    int l = 0, c = 0;
    int idx = 0;
    for(int i = s.size() - 1 ; i >= 0 ; i-- , idx++) {
        if(idx % 2 == 1) l += s[i] - '0';
        else c += s[i] - '0';
    }
    if(abs(l - c) % 11 == 0) cout << 1 << endl;
    else cout << 0 << endl;

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
