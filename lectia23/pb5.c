#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char v[255];
	cin.getline(v, 255);
	for (int i = 0; i < strlen(v); i++)
		if (65 <= v[i] && v[i] <= 90)
			v[i] = v[i] + 32;
	cout << v;
}

