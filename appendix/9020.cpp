#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a[10001];

	int n;

	cin >> n;

	while (n) {
		int min = 9999;
		int m1 = 0;
		int m2 = 0;
		int b;
		cin >> b;

		a[0] = 0;
		a[1] = 0;

		for (int i = 2; i <= b; i++)
			a[i] = 1;

		for (int i = 2; i <= int(sqrt(b)); i++) {
			for (int j = 2; i * j <= b; j++) {
				a[i * j] = 0;

			}
		}
		int v = b / 2;
		for (int m = v; m > 0; m--) {
			if (a[m] == 1 && a[b - m] == 1 && m <= b - m)
				if (min > b - 2 * m) {
					min = b - 2 * m;
					m1 = m;
					m2 = b - m;

				}

		}
				cout << m1 << " " << m2 << '\n';
	
	n--;
}

}