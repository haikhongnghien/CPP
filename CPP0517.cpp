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

void inds(struct NhanVien ds[], int n) {
    for(int i = 1 ; i <= n ; i++) {
        cout << setw(5) << setfill('0') << i << ' ';
        cout << ds[i - 1].name << ' ' << ds[i - 1].sex << ' ';
        cout << ds[i - 1].date << ' ' << ds[i - 1].address << ' ' << ds[i - 1].mathue << ' ' << ds[i - 1].time << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
