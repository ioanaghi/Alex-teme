#include <iostream>
using namespace std;
int ogl(int n) {
    int ogli = 0;
    while (n > 0) {
        ogli = ogli * 10 + n % 10;
        n = n / 10;
    }
    return ogli;
     
}
int Palindrom(int n) {
    if (n == ogl(n))
        return 1;
    else
        return 0;
}
void Matri(int n, int v[][101]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
}
int nrPali(int n, int v[][101]) {
    int nr = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            nr = nr + Palindrom(v[i][j]);
    return nr;
}
int main()
{
    int n;
    int v[101][101];
    cin >> n;
    Matri(n, v);
    cout << nrPali(n, v);
    return 0;
}

