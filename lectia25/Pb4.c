#include <iostream>
using namespace std;
int main()
{
    int n;
    bool ok = 0;
    int v[101];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (ok == 0) {
        ok = 1;
        for (int i = 0; i < n-1; i++) {
            if (v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                ok = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
    cout << v[0] << " ";
    cout << v[n - 1];

    return 0;
}

