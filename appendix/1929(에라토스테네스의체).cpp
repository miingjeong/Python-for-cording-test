#include iostream
#include cmath
#include algorithm
using namespace std;

int main() {

	 int 하면 범위 너무 커졌다 bool로 하고 true, false 넣어줄 띵크!
	bool a[1000001];
	int N, K;
	cin  N  K;

	a[0] = false;
	a[1] = false;
	계속 틀렸던 이유.  i를 N으로 했다. 만약 1부터면 1을 다시 true만들어준 셈
	for (int i = 2; i = K; i++) {
		a[i] = true;
	}

	for (int i = 2; i = sqrt(K); i++) {
		if (a[i]) {
			for (int j = i  i; j = K; j += i) {
				a[j] = false;
			}

		}
	}
	for (int k = N; k = K; k++) {
		if (a[k]) {  if가 참이면 
			printf(%dn, k);
		}
	}
}


