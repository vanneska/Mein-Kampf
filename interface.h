#pragma once
#pragma once
#include <iostream>
#include <vector>
using namespace std;
struct interface {
	int read_sizes(int& m, int& n);
	void read_matrix(vector<vector<int>>& a, int n, int m);
	void print_matrix(vector<vector<int>>& a, int n, int m);
	void print_array(vector<int>& b, int n);
	void calculate(vector<int>& b, const vector<vector<int>>& a, int n, int m);
};