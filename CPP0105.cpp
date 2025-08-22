#include <bits/stdc++.h>
#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

int locphat(int n) {
    while(n) {
        if(n % 10 != 0 && n % 10 != 6 && n % 10 != 8) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    
    FASTER;
    int t; 
    cin >> t; 
    while(t--) {
        long long n;
        cin >> n;
        cout << (locphat(n) ? "YES" : "NO") << endl;
    }

    return 0;
}
