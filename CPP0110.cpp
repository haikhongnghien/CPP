#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve(string n) {
    size_t len = n.find("084");
    if(len != string ::npos) {
        n.erase(len, 3);
    }
    cout << n << endl;
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
