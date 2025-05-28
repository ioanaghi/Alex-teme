#include <iostream>
using namespace std;
void citireMat(int m[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
}
bool prim(int a) {
    if (a <= 1)
        return 0;
    if (a == 2)
        return 1;
    if (a % 2 == 0)
        return 0;
    for (int d = 3; d * d <= a; d = d + 2)
        if (a % d == 0)
            return 0;
    return 1;
}
int ElPrime(int m[][100], int n) {
    int nr = 0;
    for (int i = 0; i < n; i++) {
        if (prim(m[i][i]))
            nr++;
        }
    return nr;
}
int main() {
    int n;
    cin >> n;
    int m[100][100];
    citireMat(m, n);
    cout << ElPrime(m, n);
    return 0;
}
