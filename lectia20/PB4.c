#include <iostream>
using namespace std;
int Fib(int n) {
    if (n == 1)
        return 1;
    else
        if (n == 2)
            return 1;
        else
            return Fib(n - 1) + Fib(n - 2);

}
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
    cin >> n;
    cout << Fib(n) << endl;
    cout << Fact(Fib(n)) << endl;
    return 0;
}

