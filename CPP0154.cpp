#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve(long long a, long long b) {

    long long sum = 0;
    for(int i = 1 ; i <= a ; i++) {
        sum += i % b;
    }
    cout << ((sum == b) ? 1 : 0) << endl;

}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        long long a, m;
        cin >> a >> m;
        solve(a,m);
    }

    return 0;
}
