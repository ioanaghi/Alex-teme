#include <iostream>
using namespace std;
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
    cout << SumaCif(n) << endl;
    cout << SumaCif(m) << endl;
    cout << SumaCif(n) + SumaCif(m);
    return 0;
}

