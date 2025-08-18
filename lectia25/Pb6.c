#include <iostream>
using namespace std;
void citre(int & n, int v[]) {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
}
int suma(int n, int v[]) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + v[i];
    return sum;
}
void afisare(int n, int v[]) {
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}

int main()
{
    int n;
    int v[101];
    citre(n, v);
    cout << suma(n, v) << ' ';
    afisare(n, v);
    return 0;
}

