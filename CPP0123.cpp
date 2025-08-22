#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve(long long n) {
    if(n < 2) {
        cout << "NO" << endl;
        return;
    }
    for(int i = 2 ; i <= sqrt(n) ; i++) {
        if(n % i == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    
    FASTER;
    
    long long n;
    cin >> n;
    solve(n);
  
    return 0;
}
