#pragma once
#include"elem.h"

class list {
protected:
	elem* head;
public:
	list();
	list(const list & tmp);
	list &operator= (const list & tmp);
	~list();
};