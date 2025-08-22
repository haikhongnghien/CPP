#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve(long long n) {

    vector<long long> a(n);
    for(long long i = 0 ; i < n ; i++) {
        cin >> a[i];
    };
    sort(a.begin(), a.end());
    long long d = a[1] - a[0];
    for(int i = 1 ; i < n ; i++) {
        d = min(d, abs(a[i] - a[i - 1]));
    }
    cout << d << endl;

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
