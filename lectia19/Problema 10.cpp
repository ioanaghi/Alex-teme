#include <iostream>
using namespace std;
void citireMat(int m[][100], int n, int p) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> m[i][j];
        }
    }
}
bool verLinii(int m[][100], int n, int p, int a) {
    bool ok = 0;
    for(int i = 0; i < n; i++){
        ok = 0;
        for (int j = 0; j < p; j++) {
            if (m[i][j] == a)
                ok = 1;
        }
        if (ok == 0)
            return 0;
    }
    return 1;
       
}

int main() {
    int n, p;
    cin >> n;
    cin >> p;
    int m[100][100];
    citireMat(m, n, p);
    int a;
    cin >> a;
    if (verLinii(m, n, p, a))
        cout << "Da";
    else
        cout << "NU";
    return 0;
}
