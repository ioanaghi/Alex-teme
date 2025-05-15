#include <iostream>
using namespace std;
int nrImp(int n) {
	int m = 0;
	int p = 1;
	while (n > 0) {
		if (n % 2 != 0) {
			m = n % 10 * p;
			p = p * 10;
		}
		n = n / 10;
	}
	return m;
}
int main()
{
	int n;
	cin >> n;
	cout << nrImp(n);
	return 0;
}

