#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    string s;
    cin >> s;
    long long sum = 0;
    for(auto x : s) {
        sum = sum * 2 + (x - '0');
        sum %= 5;
    }

    if(sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

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
