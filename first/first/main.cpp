#include<iostream>
#include<string>
#include<algorithm>
#include"Queue.h"
#include<chrono>
#include<ctime>
#include<random>
#include<cassert>
#include<vector>

using namespace std;

Queue mas[10];

mt19937 gen(chrono::high_resolution_clock::now().time_since_epoch().count());

int calc(const int & x, const int & index) {
	string jopa = to_string(x);
	while (jopa.size() <= index) jopa = '0' + jopa;
	return jopa[jopa.size() - index - 1] - '0';
}

int max_cnt(const int & x) {
	string s = to_string(x);
	return s.size();
}

int* gen_mas(const int & len) {
	int *res = new int[len];
	for (int i = 0; i < len; i++) {
		res[i] = gen() % (int)1e10;
		res[i] = abs(res[i]);
	}
	return res;
}

int main() {
	int n = 100;
	int* kek = gen_mas(n);
	vector<int> qwe(n);
	for (int i = 0; i < n; i++) qwe[i] = kek[i];
	sort(qwe.begin(), qwe.end());
	int ma = -1;
	for (int i = 0; i < n; i++) {
		ma = max(ma, max_cnt(kek[i]));
	}
	for (int i = 0; i < ma; i++) {
		for (int j = 0; j < n; j++) {
			mas[calc(kek[j], i)].push(kek[j]);
		}
		int index = 0;
		for (int j = 0; j < 10; j++) {
			while (!mas[j].empty()) {
				kek[index++] = mas[j].pop();
			}
		}
		for (int j = 0; j < n; j++) {
			cout << kek[j] << ' ';
		}
		cout << '\n' << '\n';
	}
	/*for (int i = 0; i < n; i++) {
		cout << lol[i] << ' ';
	}
	cout << '\n';*/
	for (int i = 0; i < n; i++) {
		assert(kek[i] == qwe[i]);
	}
	return 0;
}