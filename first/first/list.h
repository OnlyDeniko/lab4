#pragma once
#include"elem.h"
#include<iostream>

class list {
protected:
	elem* head;
public:
	list();
	list(const list & tmp);
	list &operator= (const list & tmp);
	void push_back(int k);
	elem* get_head() {
		return this->head;
	}
	void shift();
	friend std::ostream& operator<< (std::ostream & out, list & tmp) {
		elem * cur = tmp.get_head();
		while (cur) {
			out << cur->get_val() << ' ';
			cur = cur->get_next();
		}
		return out;
	}
	void del(int k);
	void insert(int k);
	~list();
};

