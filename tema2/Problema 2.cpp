#include <iostream>
#include <algorithm>
using namespace std;

void citireVector(int v[], int& n) {
    cout << "n = "; cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
}

bool cautareBinara(int v[], int n, int x) {
    sort(v, v + n);
    int st = 0, dr = n - 1;
    while (st <= dr) {
        int m = (st + dr) / 2;
        if (v[m] == x) return true;
        if (v[m] < x) st = m + 1;
        else dr = m - 1;
    }
    return false;
}

int main() {
    int v[100], n, a;
    citireVector(v, n);
    cout << "a = "; cin >> a;
    if (cautareBinara(v, n, a)) cout << "DA";
    else cout << "NU";
    return 0;
}
