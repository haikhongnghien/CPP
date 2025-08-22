#include <bits/stdc++.h>
#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

long long giaithua(int n) {
    if(n == 0 || n == 1) return 1;
    return n * giaithua(n - 1);
}

int main() {
    
    FASTER;
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1 ; i <= n ; i++) {
        sum += giaithua(i);
    }
    cout << sum << endl;

    return 0;
}
