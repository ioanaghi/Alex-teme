#include <iostream>
using namespace std;
int NrApa(int n, int cif) {
    int nr = 0;
    while (n != 0) {
        if (n % 10 == cif) {
            nr++;
        }
        n = n / 10;
    }
    return nr;
}
int nrApar(int n, int cif) {
    if (n == 0)
        return 0;
    else {
        if (n % 10 == cif)
            return 1 + nrApar(n / 10, cif);
        else
            return nrApar(n / 10, cif);
    }
}
int main()
{
    int n, cif;
    cin >> n >> cif;
    cout << NrApa(n, cif) << endl;
    cout << nrApar(n, cif);
    return 0;
}

