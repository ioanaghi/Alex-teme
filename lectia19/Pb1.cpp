#include <iostream>
using namespace std;
void citimV(int v[], int n) {
    cout << "Introdu valori: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}
bool par(int p) {
    cout << "Verificare par " << endl;
    if (p % 2 == 0)
        return 1;
    else
        return 0;
}
int patrat(int p) {
    cout << "Calculare: " << endl;
    return p * p;
}
float mediaAr(int v[], int n) {
    int S = 0;
    int nr = 0;
    for (int i = 0; i < n; i++) {
        if (par(v[i])) {
            S = S + patrat(v[i]);
            nr++;
        }

    }
    return (S * 1.0) / nr;
}
int main() {
    int n;
    int v[20];
    cin >> n;
    citimV(v, n);
    cout << mediaAr(v, n);
    return 0;
}
