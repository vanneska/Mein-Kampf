#include "interface.h"


int main() {
	interface menu;
	int n, m;
	vector<vector<int>> a;
	while (menu.read_sizes(m, n) < 0) {
		std::cout << "Oshibka vvoda! Povtorite popytku!" << std::endl;
		std::cin.clear();
		std::cin.ignore();
	}
	try {
		if (m == 0 || n == 0) throw(bad_alloc());
		a.assign(m, vector<int>(n));
	}
	catch (bad_alloc& ba) {
		cout << "Ne udalos' vydelit' takuyu pamyat'! " << ba.what() << endl;
		return 1;
	}
	vector<int> b(m);
	menu.read_matrix(a, m, n);
	menu.print_matrix(a, m, n);
	menu.calculate(b, a, m, n);
	menu.print_array(b, m);
	return 0;
}