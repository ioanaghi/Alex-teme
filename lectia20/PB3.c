#include <iostream>
using namespace std;
int Fact(int n) {
    if (n == 1)
        return 1;
    else
        return Fact(n - 1)* n;
}
int SumaCif(int n) {
    if (n == 0)
        return 0;
    else
        return SumaCif(n / 10) + n % 10;
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << Fact(n) << endl;
    cout << Fact(m) << endl;
    cout << SumaCif(Fact(n) + Fact(m));
    return 0;
}

