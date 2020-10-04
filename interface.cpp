#include "interface.h"

void read(int& n, int& m) {
	cout << "Vvedite m i n: " << endl;
	cin >> n >> m;
}

void read(int** a, int n, int m) {
	cout << "Vvedite matricu: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
}

void print(int** a, int n, int m) {
	cout << "Ishodnaya matrica: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}

void print(int* b, int n) {
	cout << "Poluchennyi vector: " << endl;
	for (int i = 0; i < n; i++) {
		cout << b[i] << ' ';
	}
	cout << endl;
}


void calculate(int* b, int** a, int n, int m) {
	for (int i = 0; i < n; i++) {
		bool all_positive = 1;
		for (int j = 0; j < m; j++) {
			if (a[i][j] <= 0) all_positive = 0;
		}
		if (all_positive) {
			b[i] = a[i][0];
		}
		else {
			b[i] = a[i][m - 1];
		}
	}
}