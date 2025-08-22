#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve(int n) {
    if(n < 10) {
        cout << n << endl;
        return;
    }   
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    solve(sum);
}

int main() {
    
    FASTER;
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
