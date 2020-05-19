#include<iostream>
using namespace std;

void main()
{
	int sum = 0, n = 1, sw = 1;

	while (n <= 100) {
			sum = sum + (sw*n);
			sw = -sw;
			n++;
	}

	cout << "гу╟Х : " << sum << endl;
}
