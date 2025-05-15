#include <iostream>
using namespace std;
bool vNrImp(int n) {
	int p = 0;
	int i = 0;
	while (n > 0) {
		if (n % 2 == 0)
			p++;
		else
			i++;
		n = n / 10;
	}
	if (p == i)
		return true;
	else
		return false;
}
int main()
{
	int n;
	cin >> n;
	if (vNrImp(n))
		cout << "Da";
	else
		cout << "Nu";
	return 0;
}

