#include <iostream>
using namespace std;
void DefVect(int n, int v[]) {
    for (int i = 0; i < n; i++) {
        v[i] = 0;
    }

}
int NrVect(int n, int v[]) {
    int Nr = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != 0)
            Nr++;
    }
    return Nr;
}
void NrCifre(int n) {
    int Cifre[10];
    DefVect(10, Cifre);
    while (n != 0) {
        Cifre[n % 10]++;
        n = n / 10;
    }
    if (NrVect(10, Cifre) == 2)
        cout << "Da";
    else
        cout << "Nu";
}
int main()
{
    int n;
    cin >> n;
    NrCifre(n);
    return 0;
}

