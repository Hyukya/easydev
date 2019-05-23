#include "InMemoryStorage.h"

InMemoryStorage::InMemoryStorage()
{
}

InMemoryStorage::~InMemoryStorage()
{
}

void InMemoryStorage::_begin_tx()
{
}

bool InMemoryStorage::_push_back(const int * data)
{
	if(nullptr == data)
		return false;
	this->_pool.push(*data);
	return true;
}

bool InMemoryStorage::_pop_front(int * data)
{
	if(nullptr == data)
		return false;

	*data = this->_pool.front();
	this->_pool.pop();

	return true;
}

void InMemoryStorage::_end_tx()
{
}
