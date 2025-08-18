#include <iostream>
using namespace std;
int main()
{
    int X, Y,  ogl = 0;
    cin >> X;
    Y = X;
    while (X > 0) {
        ogl = X % 10 + ogl * 10;
        X = X / 10;
    }
    if (Y == ogl)
        cout << "nr este palindrom";
    else
        cout << "nu este palindrom";
    return 0;
}

