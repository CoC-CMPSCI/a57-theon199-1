#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N, sum;

	cin >> n1 >> n2;
	cin >> N;

	cout << n1 << " " << n2;

	for (int i = 2; i < N; ++i) {
		sum = n1 + n2;
		cout << " " << sum;
		n1 = n2;
		n2 = sum;
	}

	cout << endl;
}
