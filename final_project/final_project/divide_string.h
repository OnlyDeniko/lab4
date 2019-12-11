#pragma once
#include<string>

void get_words_one_razdel(std::string t, std::string *w, int &k) {
	while (t.size() > 1) {
		int l = (int)t.find(" ");
		if (l >= 1) {
			w[k++] = std::string(t, 0, l);
		}
		t = std::string(t, l + 1, t.size() - l);
	}
}

int calc(const int & x, const int & index) {
	std::string jopa = std::to_string(x);
	while (jopa.size() <= index) jopa = '0' + jopa;
	return jopa[jopa.size() - index - 1] - '0';
}

int max_cnt(const int & x) {
	std::string s = std::to_string(x);
	return s.size();
}