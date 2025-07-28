#include <cstring>
#include <iostream>
using namespace std;
void INVS(char& a, char& b) {
	char c;
	c = a;
	a = b; 
	b = c;
}
int main()
{
	char v[101];
	cin.getline(v, 101);
	for (int i = 0; i < strlen(v) / 2; i++)
		INVS(v[i], v[strlen(v) - 1 - i]);
	cout << v;
		
	return 0;
			
}

