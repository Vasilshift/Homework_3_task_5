#include <iostream>
using namespace std;

int main() {

	long long int a;
	int b = 1;
	cout << "Please, enter value a: ";
	cin >> a;

	for (b = 1; b <= a; b++) {

		if ((a % (b * b)) == 0 and (a % (b * b * b)) != 0) {

			cout << b << " ";
		}

	}

	return 0;
}