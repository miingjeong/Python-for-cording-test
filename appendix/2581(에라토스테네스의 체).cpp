#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	// int 하면 범위 너무 커졌다 bool로 하고 true, false 넣어줄 띵크!
	bool a[10001];
	int b[10001];
	int i = 0;
	int sum = 0;
	int N, K;
	cin >> N;
	cin >> K;

	a[0] = false;
	a[1] = false;
	
	for (int i = 2; i <= K; i++) {
		a[i] = true;
	}

	for (int i = 2; i <= sqrt(K); i++) {
		if (a[i]) {
			for (int j = i * i; j <= K; j += i) {
				a[j] = false;
			}

		}
	}
	for (int k = N; k <= K; k++) {

		if (a[k]) { // if가 참이면 

			sum += k;
		}
	}
	if (sum == 0)
		cout << -1 << endl;
	else
		cout << sum << endl;

	for (int k = N; k <= K; k++) {
		if (a[k]) {
			cout << k << endl;
			return 0;
		}
	}
}


