#pragma once
#include "Storage.h"
#include <queue>
#include <mutex>

class InMemoryStorage : public Storage {
public:
	void begin_tx();
	void end_tx();

	bool push_back(void* data);
	bool pop_front(void** data);
private:
	std::queue<void*> storage;
	std::mutex mutex;
};