#include "list.h"

list::list() {
	head = nullptr;
}

list::list(const list & tmp) {
	if (tmp.head == nullptr) {
		head = nullptr;
	}
	else {
		head = new elem(*(tmp.head));
		elem * cur = tmp.head->get_next();
		elem *last = head;
		while (cur != nullptr) {
			elem * now = new elem(*(cur));
			last->set_next(now);
			last = last->get_next();
			cur = cur->get_next();
		}
	}
}

list & list::operator=(const list & tmp) {
	if (this == &tmp) return *this;
	if (head != nullptr) {
		delete head;
	}
	head = new elem(*(tmp.head));
	elem *cur = tmp.head->get_next();
	elem * last = head;
	while (cur != nullptr) {
		elem * now = new elem(*(cur));
		last->set_next(now);
		last = last->get_next();
		cur = cur->get_next();
	}
	return *this;
}

list::~list() {
	delete head;
}