#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char v[255];
	cin.getline(v, 255);
	for (int i = 0; i < strlen(v); i++)
		if (strchr("aeiou", v[i]) != NULL)
			v[i] = v[i] - 32;
	cout << v;
}

