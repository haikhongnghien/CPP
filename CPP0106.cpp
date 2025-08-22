#include <bits/stdc++.h>
#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

int thuannghich(long long n) {
    long long temp = n, res = 0;
    while(n) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == temp;
}

int main() {
    
    FASTER;
    int t; 
    cin >> t; 
    while(t--) {
        long long n;
        cin >> n;
        cout << (thuannghich(n) ? "YES" : "NO") << endl;
    }

    return 0;
}
