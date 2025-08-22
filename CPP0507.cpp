#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

struct PhanSo{
    long long tu, mau;
};

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

void rutgon(long long &a, long long &b) {
    long long u = gcd(a,b);
    a /= u;
    b /= u;
    if(b < 0) {   // chuẩn hóa mẫu dương
        a = -a;
        b = -b;
    }
}

PhanSo tong(PhanSo a, PhanSo b) {
    long long bcnn = lcm(a.mau, b.mau);
    long long tu = a.tu * (bcnn / a.mau) + b.tu * (bcnn / b.mau);
    long long mau = bcnn;
    rutgon(tu, mau);
    return {tu, mau};
}

void nhap(PhanSo &a) {
    cin >> a.tu >> a.mau;
}

void in(PhanSo a) {
    cout << a.tu << '/' << a.mau << endl;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
