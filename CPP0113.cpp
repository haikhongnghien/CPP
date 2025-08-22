#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve(string n) {
    int len = n.size() - 1;
    int a = n[len - 1] - '0';
    int b = a * 10 + n[len] - '0';
    if(b == 86) {
        cout << "1" << endl;
    }
    else cout << "0" << endl;
}

int main() {
    
    FASTER;
    int t; 
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}
