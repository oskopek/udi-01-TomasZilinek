using namespace std;
#include <iostream>
int l;

int main() {
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			cout << "Buzz" << endl;
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	cin >> l;
	return 0;
}
