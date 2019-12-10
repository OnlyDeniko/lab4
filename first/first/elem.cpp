#include "elem.h"

elem::elem(int kek) {
	val = kek;
	next = nullptr;
}

elem::elem(const elem & tmp) {
	val = tmp.val;
	next = nullptr;
}

elem::~elem() {
	delete next;
}

elem & elem::operator=(const elem & tmp) {
	if (this == &tmp) return *this;
	val = tmp.val;
	next = nullptr;
	return *this;
}

int elem::get_val() {
	return this->val;
}

elem * elem::get_next() {
	return next;
}

void elem::set_val(const int & kek) {
	this->val = kek;
}

void elem::set_next(elem * kek) {
	this->next = kek;
}
