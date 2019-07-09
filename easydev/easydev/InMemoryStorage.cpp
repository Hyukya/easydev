#include "InMemoryStorage.h"

void InMemoryStorage::BeginTransaction()
{
	this->mutex_.lock();
}

void InMemoryStorage::EndTransaction()
{
	this->mutex_.unlock();
}

uint64_t InMemoryStorage::Size()
{
	return 0;
}
uint64_t InMemoryStorage::Count()
{
	return this->storage_.size();
}

void InMemoryStorage::Push(const DataType& data_type)
{
	//TODO
}

const DataType& InMemoryStorage::Front()
{
	//TODO
}

void InMemoryStorage::Pop()
{
	//TODO
}