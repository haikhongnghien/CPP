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

void solve(int a, int b) {

    if(a > b) swap(a,b);
    for(int i = a ; i <= b ; i++) {
        if(check(i)) cout << i << " ";
    }

}

int main() {
    
    FASTER;
    int a,b;
    cin >> a >> b;
    solve(a,b);

    return 0;
}
