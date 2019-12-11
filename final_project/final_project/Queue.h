#pragma once
#include"list.h"

namespace Denis {
	class Queue : public list {
	private:
		elem* tail;
	public:
		Queue();
		~Queue();
		Queue(const Queue & tmp);
		Queue &operator= (const Queue & tmp);
		void push(const int & k);
		int pop();
		int size();
		bool empty();
	};
}
