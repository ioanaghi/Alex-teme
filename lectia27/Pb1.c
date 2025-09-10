#include <iostream>
using namespace std;
int main()
{
    int n;
    bool ok = 1;
    int v[101][101];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> v[i][j];


    for (int j = 0; j < n; j++) {
        if (v[0][j] % 2 != 0)
            ok = 0;
        if (v[n - 1][j] % 2 != 0)
            ok = 0;
    }
    for (int i = 0; i < n; i++) {
        if (v[i][0] % 2 != 0)
            ok = 0;
        if (v[i][n - 1] % 2 != 0)
            ok = 0;
    }
    if (ok == 1)
        cout << "Pare";
    else
        cout << "NU sunt pare";
    return 0;
    
}

