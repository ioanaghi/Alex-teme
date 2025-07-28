#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	int nrLit = 0;
	int Voc = 0;
	int Con = 0;
	char v[101];
	cin.getline(v, 101);
	nrLit = strlen(v);
	for (int i = 0; i < nrLit; i++)
		if (strchr("aeiouAEIOU", v[i]) != NULL)
			Voc++;
	Con = nrLit - Voc;
	cout << "Consoane: " << Con << endl;
	cout << "Vocale: " << Voc;
	return 0;
			
}

