#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve(string n) {
    for(int i = 1 ; i < n.size() ; i++) {
        if(abs(n[i] - n[i - 1]) != 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    
    FASTER;
    int t; 
    cin >> t;
    while(t--) {
        string n;
        cin >> n;
        solve(n);
    }

    return 0;
}
