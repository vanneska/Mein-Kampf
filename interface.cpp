#include "interface.h"
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

int interface::read_sizes(int& m, int& n) {
	cout << "Vvedite m: " << endl;
	cin >> m;
	if (!cin.good()) {
		return -1;
	}
	cout << "Vvedite n: " << endl;
	cin >> n;
	if (!cin.good()) {
		return -1;
	}
	return 1;
}

void interface::read_matrix(vector<vector<int>>& a, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 100 + 1;
		}
	}
}

void interface::print_matrix(vector<vector<int>>& a, int n, int m) {
	cout << "Ishodnaya matrica: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}

void interface::print_array(vector<int>& b, int n) {
	cout << "Poluchennyi vector: " << endl;
	for (int i = 0; i < n; i++) {
		cout << b[i] << ' ';
	}
	cout << endl;
}

void interface::calculate(vector<int>& b, const vector<vector<int>>& a, int n, int m) {
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