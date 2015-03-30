//Nowy plik c++
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int tab[5] = { 1, 2, 5, 0, 0 };

	for (int i = 0; i<5; i++)
		//jeœli wartoœæ tablicy jest parzysta
		if (tab[i] % 2 == 0)
			cout << tab[i] << " ";

	for (int i = 0; i<5; i++)
		//jeœli wartoœæ tablicy jest nieparzysta
		if (tab[i] % 2)
			cout << tab[i] << " ";

	cout << endl;

	system("pause");
	return 0;
}