#include <iostream>
using namespace std;
int Par(int n) {
    if (n == 0)
        return 1;
    if (n % 10 % 2 == 0)
        return Par(n/10);
    if (n % 10 % 2 != 0)
        return 0;
    
}
int main()
{
    int n, m;
    cin >> n;
    cout << Par(n) << endl;
    return 0;
}

