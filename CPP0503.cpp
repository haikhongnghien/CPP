#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

struct PhanSo{
    long long tu,mau;
};

long long gcd(long long a,long long b) {
    while(b) {
        long long t = a % b;
        a = b; 
        b = t;
    }
    return a;
}

void rutgon(struct PhanSo &a) {
    long long ucnn = gcd(a.tu, a.mau);
    a.tu = a.tu / ucnn;
    a.mau = a.mau / ucnn;
}

void nhap(struct PhanSo &a) {
    cin >> a.tu >> a.mau;
}

void in(struct PhanSo a) {
    cout << a.tu << '/' << a.mau << endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
