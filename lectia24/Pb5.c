#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char v[101];
	char cuvant[101];
	cin.getline(v, 101);
	int ok = 0;
	int j = 0;
	for (int i = 0; i < strlen(v); i++) {
		if (v[i] == ' ') {
			if (ok == 1)
				cout << cuvant << " ";
			strcpy(cuvant, "");
			ok = 0;
			j = 0;
		}
		else {
			if (strchr("aeiouAEIOU", v[i]) != NULL)
				ok = 1;
			cuvant[j] = v[i];
			j++;
		}
	}
	return 0;
			
}

