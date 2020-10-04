#include "interface.h"
#include <iostream>
using namespace std;
int main() {
	int n, m;
	read(m, n);
	int** a = new int* [m];
	for (int i = 0; i < m; i++) {
		a[i] = new int[n];
	}
	int* b = new int[m];
	read(a, m, n);
	print(a, m, n);
	calculate(b, a, m, n);
	print(b, m);
	return 0;
}