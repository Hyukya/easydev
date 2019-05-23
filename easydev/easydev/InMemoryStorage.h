#pragma once
#include "Storage.h"
#include <queue>

class InMemoryStorage : public Storage<int> {
private:
	std::queue<int> _pool;
public:
	InMemoryStorage();
	~InMemoryStorage();
private:
	void _begin_tx();
	bool _push_back(const int* data);
	bool _pop_front(int* data);
	void _end_tx();
};