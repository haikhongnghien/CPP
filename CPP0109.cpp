#include <bits/stdc++.h>
#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

int solve(int n) {
    int l = 0, c = 0;
    while(n) {
        if(n % 2 == 1) l++;
        else c++;
        n /= 10;
    }
    return l == c;
}

int main() {
    
    FASTER;
    int n; 
    cin >> n;
    int d = 0;
        for(int j = pow(10,n - 1) ; j < pow(10, n) ; j++) {
            if(solve(j)) {
                cout << j << " ";
                d++;
                if(d == 10) cout << endl, d = 0;
            }  
        }

    return 0;
}
