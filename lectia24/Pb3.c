#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char v[101];
	cin.getline(v, 101);
	for (int i = 0; i < strlen(v); i++)
		if (v[i] == 'a')
			v[i] = 'n';
	cout << v;
	return 0;
			
}

