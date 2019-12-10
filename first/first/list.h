#pragma once
#include"elem.h"

class list {
private:
	elem* head;
public:
	list();
	list(const list & tmp);
	list &operator= (const list & tmp);
	~list();
	void add(int val);
	void del(int val);
	int pop();
};

