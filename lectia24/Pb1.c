#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char v[101];
	cin.getline(v, 101);
	cout << v << endl;
	cout << strlen(v);
	if (strchr(v, "b") != NULL)
		cout << "b este in sir";
	else
		cout << "b nu este in sir";
}

