#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, prod = 1;
    bool ok = 1;
    int v[101][101];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    for(int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (i == j)
                sum = sum + v[i][j];
            if (i + j == n - 1)
                prod = prod * v[i][j];
            if (i + j > n - 1 && i > j)
                if (v[i][j] % 2 != 0)
                    ok = 0;          
        }
    cout << sum << endl;
    cout << prod << endl;
    if (ok == 1)
        cout << "Sunt pare";
    else
        cout << "Nu";



    return 0;
}

