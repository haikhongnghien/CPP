#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

struct NhanVien{
    string name, sex, date, address, mathue, time;
};

void nhap(struct NhanVien &a) {
    getline(cin >> ws, a.name);
    getline(cin >> ws, a.sex);
    getline(cin >> ws, a.date);
    getline(cin >> ws, a.address);
    getline(cin >> ws, a.mathue);
    getline(cin >> ws, a.time);
}

void in(struct NhanVien a) {
    cout << "00001" << ' ';
    cout << a.name << ' ' << a.sex << ' ';
    cout << a.date << ' ' << a.address << ' ' << a.mathue << ' ' << a.time << endl;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
