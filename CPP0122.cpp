#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

long long gcd(long long a, long long b) {
    while(b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return a / gcd(a,b) * b;
}

int main() {
    
    FASTER;
    int t; 
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long bcnn = 1;
        for(long long i = 1 ; i <= n ; i++) {
            bcnn = lcm(bcnn, i);
        }
        cout << bcnn << endl;
    }

    return 0;
}
