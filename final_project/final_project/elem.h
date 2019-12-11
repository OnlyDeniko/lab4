#pragma once
class elem {
private:
	int val;
	elem* next;
public:
	elem() {
		val = 0;
		next = nullptr;
	}
	elem(int kek = 0);
	elem(const elem& tmp);
	~elem();
	elem &operator= (const elem& tmp);
	int get_val();
	elem* get_next();
	void set_val(const int & kek);
	void set_next(elem * kek);
};