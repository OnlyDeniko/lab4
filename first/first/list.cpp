#include "list.h"

list::list() {
	head = nullptr;
}

list::list(const list & tmp) {
	if (tmp.head == nullptr) {
		head = nullptr;
	}else {
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

void list::push_back(int k) {
	if (!head) {
		head = new elem(k);
		head->set_next(nullptr);
		return;
	}
	elem * cur = head;
	while (cur->get_next()) {
		cur = cur->get_next();
	}
	elem * nxt = new elem(k);
	nxt->set_next(nullptr);
	cur->set_next(nxt);
}

void list::shift() {
	if (!head) return;
	int sz = 1;
	elem * cur = head;
	while (cur->get_next()) {
		sz++;
		cur = cur->get_next();
	}
	cur->set_next(head);
	cur = head;
	for (int i = 1; i < sz / 2; i++) {
		cur = cur->get_next();
	}
	head = cur->get_next();
	cur->set_next(nullptr);
}

void list::del(int k) {
	if (!head) return;
	elem * cur = head;
	int ok = 0;
	while (cur) {
		if (cur->get_next() && cur->get_next()->get_next() == nullptr && cur->get_next()->get_val() == k) {
			elem * tmp = cur->get_next();
			tmp->set_next(nullptr);
			delete tmp;
			cur->set_next(nullptr);
		}
		if (cur->get_val() == k) {
			if (cur->get_next()) {
				cur->set_val(cur->get_next()->get_val());
				elem * tmp = cur->get_next();
				cur->set_next(cur->get_next()->get_next());
				tmp->set_next(nullptr);
				delete tmp;
			}
			else {
				ok = 1;
				break;
			}
		}	
		cur = cur->get_next();
	}
	if (ok) {
		delete head;
		head = NULL;
	}
}

void list::insert(int k) {
	if (!head){
		elem * tmp = new elem(k);
		head = tmp;
		return;
	}
	if (k > head->get_val()) {
		elem * tmp = new elem(k);
		tmp->set_next(head);
		head = tmp;
		return;
	}
	elem * cur = head;
	while (cur->get_next()) {
		if (k > cur->get_next()->get_val()) {
			elem * tmp = cur->get_next();
			elem * zv = new elem(k);
			cur->set_next(zv);
			zv->set_next(tmp);
			return;
		}
		cur = cur->get_next();
	}
	elem * tmp = new elem(k);
	cur->set_next(tmp);
	tmp->set_next(nullptr);
}

list::~list() {
	delete head;
}
