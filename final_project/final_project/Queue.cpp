#include "Queue.h"

using namespace Denis;

Queue::Queue() : list() {
	tail = nullptr;
}

Queue::~Queue() {
	delete head;
	head = nullptr;
	tail = nullptr;
}

Queue::Queue(const Queue & tmp) {
	if (tmp.head == nullptr) {
		head = tail = nullptr;
	}
	else {
		head = tail = new elem(*(tmp.head));
		elem *now = tmp.head->get_next();
		while (now != nullptr) {
			elem * qwe = new elem(*(now));
			tail->set_next(qwe);
			tail = tail->get_next();
			now = now->get_next();
		}
	}
}

Queue & Queue::operator=(const Queue & tmp) {
	if (this == &tmp) return *this;
	if (head != nullptr) delete head;
	if (tmp.head == nullptr) return *this;
	head = tail = new elem(*(tmp.head));
	elem *cur = tmp.head->get_next();
	while (cur != nullptr) {
		elem *now = new elem(*(cur));
		tail->set_next(now);
		tail = tail->get_next();
		cur = cur->get_next();
	}
	return *this;
}

void Queue::push(const int & k) {
	elem * tmp = new elem(k);
	if (head != nullptr) {
		tail->set_next(tmp);
		tail = tail->get_next();
	}
	else {
		head = tail = tmp;
	}
}

int Queue::pop() {
	if (head == nullptr) throw 1;
	elem * tmp = new elem(*(head));
	head = head->get_next();
	tmp->set_next(nullptr);
	int ans = tmp->get_val();
	delete tmp;
	return ans;
}

int Queue::size() {
	int ans = 0;
	elem * now = head;
	while (now != nullptr) {
		ans++;
		now = now->get_next();
	}
	return ans;
}

bool Queue::empty() {
	return head == nullptr;
}