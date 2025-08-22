#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

int check(int n) {
    if(n < 2) return 0;
    for(int i = 2 ; i <= sqrt(n) ; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

vector<long long> fibo;

void solve() {

    fibo.push_back(0);
    fibo.push_back(1);
    for(int i = 2 ; i < 93 ; i++) {
        fibo.push_back(fibo[i - 1] + fibo[i - 2]);
    }

}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        solve();
        cout << fibo[n] << endl;
    }

    return 0;
}
