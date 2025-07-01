#include <iostream>
using namespace std;
void defVect(int n, int v[]) {
    for (int i = 1; i <= n; i++)
        cin >> v[i];
}
int sumVect(int n, int v[]) {
    if (n == 1)
        return v[n];
    else
        return v[n] + sumVect(n - 1, v);
}
int main()
{
    int n, v[100];
    cin >> n;
    defVect(n, v);
    cout << sumVect(n, v);
    return 0;
}
