#include <iostream>
using namespace std;
int Putere(int a, int n) {
    if (n == 0)
        return 1;
    else
        return Putere(a, n-1)*a;
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << Putere(m, n) << endl;
    return 0;
}

