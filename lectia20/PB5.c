#include <iostream>
using namespace std;
int NRcif(int n) {
    if (n <= 9)
        return 1;
    else
        return NRcif(n / 10) + 1;
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << NRcif(n) << endl;
    cout << NRcif(m) << endl;
    return 0;
}

