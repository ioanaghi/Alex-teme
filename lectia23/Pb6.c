#include <cstring>
#include <iostream>
using namespace std;
void interschimbare(char  &a, char &b) {
	char c = a;
	a = b;
	b = c;
}
int main()
{
	char v[255];
	char cv[255];
	cin.getline(v, 255);
	strcpy(cv, v);
	int n;
	n = strlen(v) - 1;
	for (int i = 0; i < n / 2; i++)
		interschimbare(v[i], v[n - i]);
	if (strcmp(v, cv) == 0)
		cout << "Da";
	else
		cout << "Nu";

}

