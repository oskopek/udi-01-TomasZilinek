using namespace std;
#include <iostream>

int l, N, fn = 0, sucet = 0, a = 1, b = 1;

int main() {
	cout << "Zadajte N: ";
	cin >> N;
	

	for (;fn <= N;)
	{
		fn = a + b;
		b = a;
		a = fn;
		if (fn % 2 == 0)
		{
			sucet += fn;
		}
	}

	cout << sucet << endl;
	cin >> l;
	return 0;
}
