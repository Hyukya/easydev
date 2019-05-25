#include "InMemoryStorage.h"

void InMemoryStorage::begin_tx()
{
	//enter
}

void InMemoryStorage::end_tx()
{
	//leave
}

bool InMemoryStorage::push_back(void * data)
{
	this->storage.push(data);
	return true;
}

bool InMemoryStorage::pop_front(void ** data)
{
	if (nullptr == data || this->storage.size() == 0) {
		return false;
	}
	*data = this->storage.front();
	this->storage.pop();
	return true;
}
